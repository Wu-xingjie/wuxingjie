#pragma once

#include <list>
#include <unordered_map>
#include <string>

typedef std::list<std::unordered_map<std::string, std::string>> out_entry;

typedef std::list<std::string> Entry;

class Bdfentry
{
    public:
        Bdfentry() = default;
        ~Bdfentry() =  default;
        virtual void Tomodel() = 0;
};