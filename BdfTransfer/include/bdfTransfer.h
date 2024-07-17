#pragma once

#include "../include/bdfProcessor.h"

class BdfTransfer : private BdfProcessor
{
    public:
        BdfTransfer(std::string file_address): BdfProcessor(file_address){}
        void trans();
        void show();
};