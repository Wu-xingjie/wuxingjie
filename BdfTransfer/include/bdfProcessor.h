#pragma once

#include "include/bdfReader.h"

typedef std::vector<std::string> Entry;

class BdfProcessor : public BdfReader
{
    public:
        BdfProcessor(std::string file_address);
        
        std::vector<Entry> _bdf_content;
};