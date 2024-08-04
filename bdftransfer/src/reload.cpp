#include "include/Reload.h"
#include <vector>

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

    std::vector<std::vector<std::string>> init_file;
    for (auto card : result_content)
    {
        std::vector<std::string> temp_card;
        std::string word;
        int num_small_content = card.size() / 8;
        int num_count = 1;
        for (auto elem = card.cbegin();
            elem != card.cend();
            elem++)
        {   
            if (num_count <= num_small_content)
            {
                if (word.size() < 8)
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
        init_file.push_back(temp_card);
    }

    for (auto entry : init_file)
    {
        for (auto elem :entry)
        {
            std::cout << elem;
        }
        std::cout << std::endl;
    }
}