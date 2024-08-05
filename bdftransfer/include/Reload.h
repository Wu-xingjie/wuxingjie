#pragma once

#include "include/bdfReader.h"
#include "include/bdfProcessor.h"
#include "include/bdfTransfer.h"
#include "include/TransferTool.h"
#include <algorithm>

#include <vector>
#include <string>

class Reload
{
    public:
        Reload() = default;
        ~Reload() = default;
        void reload();
        void RemoveBlack();

        std::vector<std::vector<std::string>> _init_file;


};