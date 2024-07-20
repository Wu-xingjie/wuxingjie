#pragma once

#include "fstream"
#include <vector>
#include <string>
#include <iostream>

typedef std::vector<std::string> Entry;

class BdfTransfer
{
    public:
        BdfTransfer(const std::vector<Entry>& standard_bdf)
        : _standard_bdf(standard_bdf){};
        void trans();
        void show();

    private:
        std::vector<Entry> _standard_bdf;
};