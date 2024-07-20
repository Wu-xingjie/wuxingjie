#include "include/bdfProcessor.h"

void BdfProcessor::RemoveBlank()
{
    for (auto entry = _src_content.begin();
        entry != _src_content.end();
        entry++)
    {
        bool isempty = true;
        for (auto elem : *entry)
        {
            if (elem != '\0')
            {
                isempty = false;
            }
        }
        if (isempty)
        {
            _src_content.erase(entry);
        }
    }
}

void BdfProcessor::RemoveNote()
{
    for (auto entry = _src_content.begin();
        entry != _src_content.end();
        entry++)
    {
        for (auto elem : *entry)
        {
            if(elem == '$')
            {
                _src_content.erase(entry);
                break;
            }
        }
    }
}

void BdfProcessor::Process()
{    
    for (auto card : _src_content)
    {
        Entry temp_card;
        std::string word;
        int num_small_content = card.size() / 8;
        int num_count = 1;
        for (auto elem = card.cbegin();
            elem != card.cend();
            elem++)
        {   
            if (num_count <= num_small_content)
            {
                if (word.size() < 8)
                {
                    word.push_back(*elem);
                }
                else
                {
                    word.push_back(*elem);
                    temp_card.push_back(word);
                    num_count += 1;

                    word.clear();
                }
            }
            else
            {
                word.push_back(*elem);
            }
        }
        temp_card.push_back(word);
        _bdf_content.push_back(temp_card);
    }
}

std::vector<Entry> BdfProcessor::GetResult(){ return _bdf_content; }