#pragma once

#include <list>
#include<string>

typedef std::list<std::string> Entry;

class BdfProcessor
{
    public:
        BdfProcessor(const Entry& src_content)
        : _src_content(src_content){};
        void RemoveNote();
        void Process();
        std::list<Entry> GetResult(); 
        
    private:
        std::list<std::string> _src_content;
        std::list<Entry> _bdf_content;
};