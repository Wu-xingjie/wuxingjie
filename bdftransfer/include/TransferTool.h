#pragma once

#include "include/bdfReader.h"
#include "include/bdfProcessor.h"
#include "include/bdfTransfer.h"

class TransferTool
{
    public:
        TransferTool(std::string file_address)
         : _file_address(file_address){};
        void Transfer();
    
    private:
        std::string _file_address;
};