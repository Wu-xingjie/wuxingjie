#pragma once

#include <string>
#include <vector>


class Entry
{
    public:
        Entry(const std::vector<std::string> &content) : _content(content){};  //constructor and conduct content process
        void Object_file();
        
    protected:
        std::vector<std::string> _content;
};