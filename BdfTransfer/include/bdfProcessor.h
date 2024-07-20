#pragma once

#include <vector>
#include<string>

typedef std::vector<std::string> Entry;

class BdfProcessor
{
    public:
        BdfProcessor(const Entry& src_content)
        : _src_content(src_content){};
        void RemoveBlank();
        void RemoveNote();
        void Process();
        std::vector<Entry> GetResult(); 
        
    private:
        std::vector<std::string> _src_content;
        std::vector<Entry> _bdf_content;
};