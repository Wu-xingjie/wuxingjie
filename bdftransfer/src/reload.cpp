#include "include/Reload.h"

std::vector<std::string> Reload::FileDivide(std::vector<std::string>& result_content)
{
    int sol;
    int cend;
    int begin_bulk;

    for (int i = 0; i < result_content.size(); i++)
    {
        if (result_content.at(i) == "start of execute file")
        {
            sol = i;
        }
        else if (result_content.at(i) == "end of execute file")
        {
            cend = i; 
        }
        else if (result_content.at(i) == "start of date file")
        {
            begin_bulk = i; 
        }
    }

    for (int i = sol; i < cend; i++)
    {
        _execute_file.push_back(result_content.at(i));
        if (result_content.at(i) == "start of execute file")
        {
            continue;
        }
    }
    for (int i = cend; i < begin_bulk; i++)
    {
        if (result_content.at(i) == "end of execute file")
        {
            continue;
        }
        _case_file.push_back(result_content.at(i));
    }

    std::vector<std::string> init_date_file;
    for (int i = begin_bulk; i < result_content.size() - 2; i++)
    {
        if (result_content.at(i) == "start of date file")
        {
            continue;
        }
        init_date_file.push_back(result_content.at(i));
    }
    
    return init_date_file;   
}

void Reload::reload()
{
    TransferTool bdftransfer("/home/wxj/wuxingjie/bdftransfer/BDF/example.bdf");
    bdftransfer.Transfer();

    std::string result_address = "/home/wxj/wuxingjie/bdftransfer/BDF/result.txt";
    std::vector<std::string> result_content;
    std::string result_line;
    std::fstream file;
    file.open(result_address, std::ios_base::in);
    if(file.is_open())
    {
        while (file.good())
        {
            getline(file,result_line);

            std::string temp_line = result_line; 

            auto black = std::remove_if(temp_line.begin(), temp_line.end(), ::isspace);
            temp_line.erase(black, temp_line.end());

            int sol = temp_line.find("SOL");
            if (sol != std::string::npos)
            {
                _execute_file.push_back(temp_line);
                result_line = "start of execute file";
            }
            
            int cend = temp_line.find("CEND");
            if (cend != std::string::npos)
            {
                result_line = "end of execute file";
            }

            int bulk = temp_line.find("BEGINBULK");
            if (bulk != std::string::npos)
            {
                result_line = "start of date file";
            }


            result_content.push_back(result_line);
        }
    }
    else
    {
        std::cout << "result file isn't open" << std::endl;
    }
    file.close();


    std::vector<std::string> init_date_file = FileDivide(result_content);
    for (auto card : init_date_file)
    {
        std::vector<std::string> temp_card;
        std::string word;
        int num_small_content = card.size() / 7;
        int num_count = 1;
        for (auto elem = card.cbegin();
            elem != card.cend();
            elem++)
        {   
            if (num_count <= num_small_content)
            {
                if (word.size() < 7)
                {
                    word.push_back(*elem);
                }
                else
                {
                    word.push_back(*elem);
                    temp_card.push_back(word);
                    num_count += 1;

                    word.clear();
                }
            }
            else
            {
                word.push_back(*elem);
            }
        }
        temp_card.push_back(word);
        _date_file.push_back(temp_card);
    }    
}

void Reload::RemoveBlack()
{
    for (auto& entry : _date_file)
    {
        while (entry.size() != 10)
        {
            entry.push_back("");
        }
        
        for (auto& elem : entry)
        {
            auto black = std::remove_if(elem.begin(), elem.end(), ::isspace);
            elem.erase(black, elem.end());
            if (elem == "")
            {
                elem = "NULL";
            }
        }
    }
}

void Reload::LongEntry()
{
    for (int i = 1; i < _date_file.size(); i++)
    {
        if (_date_file[i][0] == "NULL")
        {
            for (int j = 1 ; j < _date_file[i].size(); j++)
            {
                _date_file[i-1].push_back(_date_file[i][j]);
            }
        }
    }

    for (int i = 0; i < _date_file.size(); i++)
    {
        if (_date_file[i][0] == "NULL")
        {
            _date_file.erase(_date_file.begin()+i);
        }
    }
}