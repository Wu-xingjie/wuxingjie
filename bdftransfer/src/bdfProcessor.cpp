#include "include/bdfProcessor.h"


void BdfProcessor::RemoveNote()
{
    for (auto &entry : _src_content)
    {
        int loc = entry.find('$', 0);
        if (loc != std::string::npos)
        {
            entry.erase(loc, entry.size());
        }
    }
    _src_content.remove("\0");
      
}

void BdfProcessor::Process()
{    
    for (auto card : _src_content)
    {
        Entry temp_card;
        std::string word;
        int num_small_content = card.size() / 7;
        int num_count = 1;
        for (auto elem = card.cbegin();
            elem != card.cend();
            elem++)
        {   
            if (num_count <= num_small_content)
            {
                if (word.size() < 7)
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

std::list<Entry> BdfProcessor::GetResult()
{
    return _bdf_content;
}