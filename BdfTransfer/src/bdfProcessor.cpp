#include "include/bdfProcessor.h"

void BdfProcessor::RemoveBlank()
{
    int entry_count = 0;
    for (auto entry : _bdf_content)
    {
        bool isempty = true;
        for (auto elem : entry)
        {
            if (!elem.empty())
            {
                isempty = false;
                break;
            }
        }
        if (isempty)
        {
            _bdf_content.erase(_bdf_content.begin()+entry_count);
            entry_count -= 1;
        }
        entry_count++;
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
        // cout << card << endl;

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

std::vector<Entry> BdfProcessor::GetResult()
{
    // for (auto entry : _bdf_content)
    // {
    //     for (auto elem : entry)
    //     {
    //         cout << elem;
    //     }
    //     cout << endl;
    // }
    return _bdf_content;
}