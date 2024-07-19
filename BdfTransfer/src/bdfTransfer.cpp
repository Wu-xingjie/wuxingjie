#include "include/bdfTransfer.h"

void BdfTransfer::show()
{
    for (auto entry : _bdf_content)
    {
        for (auto elem : entry)
        {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
}

void BdfTransfer::trans()
{
    std::fstream file;
    file.open("/home/wxj/wuxingjie/BdfTransfer/BDF/result.txt", std::ios_base::out);
    if (file.is_open())
    {
        for (auto entry : _bdf_content)
        {
            for (auto word : entry)
            {
                file << word;
            }
            file << std::endl;
        }
    }
    else
    {
        std::cout << "file open failed" << std::endl;
    }
    file.close();
}