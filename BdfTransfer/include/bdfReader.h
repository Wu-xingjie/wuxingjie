#pragma once

#include <string>
#include <vector>
#include <iostream>

class BdfReader
{
    public:
        BdfReader(std::string bdf_file_address)
         : _bdf_file_address(bdf_file_address){};
        void Read();
        std::vector<std::string> OutPut();

    private:
        std::vector<std::string> _content;
        std::string _bdf_file_address;
};