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
        void LongEntry();
        std::vector<std::string> FileDivide(std::vector<std::string>& result_content);

        std::vector<std::string> _execute_file;
        std::vector<std::string> _case_file;
        std::vector<std::vector<std::string>> _date_file;
};