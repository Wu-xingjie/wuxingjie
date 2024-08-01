#pragma once

#include "fstream"
#include <list>
#include <string>
#include <iostream>

typedef std::list<std::string> Entry;

class BdfTransfer
{
    public:
        BdfTransfer(const std::list<Entry>& standard_bdf)
        : _standard_bdf(standard_bdf){};
        void trans();
        void show();

    private:
        std::list<Entry> _standard_bdf;
};