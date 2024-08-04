#pragma once

#include "include/bdfReader.h"
#include "include/bdfProcessor.h"
#include "include/bdfTransfer.h"
#include "include/TransferTool.h"

class Reload
{
    public:
        Reload() = default;
        ~Reload() = default;
        void reload();
};