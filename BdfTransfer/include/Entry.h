#pragma once

#include <string>
#include <vector>


class Entry
{
    private:
        std::vector<std::string> _content;
    public:
        Entry(const std::vector<std::string> &content) : _content(content){};  //constructor and conduct content process
};