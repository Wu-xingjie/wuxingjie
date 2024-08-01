#include "include/bdfReader.h"

#include <fstream>


void BdfReader::Read()
{
    std::fstream file;
    file.open(_bdf_file_address, std::ios_base::in);
    if(file.is_open())
    {
        std::string bdf_line;
        while (file.good())
        {
            getline(file, bdf_line);
            if (bdf_line != "\r")
            {
                bdf_line.pop_back();
                _content.push_back(bdf_line);
            }
        }
    }
    else
    {
        std::cout << "bdf isn't open" << std::endl;
    }
    file.close();
}

std::list<std::string> BdfReader::OutPut()
{
    return _content;
}