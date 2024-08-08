#include "include/Reload.h"

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
            result_content.push_back(result_line);
        }
    }
    else
    {
        std::cout << "result file isn't open" << std::endl;
    }
    file.close();

    for (auto card : result_content)
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
        _init_file.push_back(temp_card);
    }    
}

void Reload::RemoveBlack()
{
    for (auto& entry : _init_file)
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
    for (int i = 1; i < _init_file.size(); i++)
    {
        if (_init_file[i][0] == "NULL")
        {
            for (int j = 1 ; j < _init_file[i].size(); j++)
            {
                _init_file[i-1].push_back(_init_file[i][j]);
            }
        }
    }

    for (int i = 0; i < _init_file.size(); i++)
    {
        if (_init_file[i][0] == "NULL")
        {
            _init_file.erase(_init_file.begin()+i);
        }
    }
}