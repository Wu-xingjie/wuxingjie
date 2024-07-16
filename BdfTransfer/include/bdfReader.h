#pragma once

#include <string>
#include <vector>
#include <iostream>

class BdfReader
{
    public:
        BdfReader(std::string bdf_file_address);
        std::vector<std::string> _content;
};