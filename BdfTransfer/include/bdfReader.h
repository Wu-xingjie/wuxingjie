#pragma once

#include <string>
#include <list>
#include <iostream>

class BdfReader
{
    public:
        BdfReader(std::string bdf_file_address)
         : _bdf_file_address(bdf_file_address){};
        void Read();
        std::list<std::string> OutPut();

    private:
        std::list<std::string> _content;
        std::string _bdf_file_address;
};