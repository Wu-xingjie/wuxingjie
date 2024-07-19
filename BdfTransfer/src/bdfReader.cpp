#include "include/bdfReader.h"

#include <fstream>

BdfReader::BdfReader(std::string bdf_file_address)
{
    std::fstream file;
    file.open(bdf_file_address, std::ios_base::in);
    if(file.is_open())
    {
        std::string bdf_line;
        while (file.good())
        {
            getline(file, bdf_line);
            _content.push_back(bdf_line);
        }
    }
    else
    {
        std::cout << "bdf isn't open" << std::endl;
    }
    file.close();
}