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
            _content.push_back(bdf_line);

        }
    }
    else
    {
        std::cout << "bdf isn't open" << std::endl;
    }
    // for (auto entry : _content)
    // {
    //     cout << entry << endl;
    // }
    file.close();
}

std::vector<std::string> BdfReader::OutPut()
{
    return _content;
}