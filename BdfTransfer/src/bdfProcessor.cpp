#include "../include/bdfProcessor.h"

BdfProcessor::BdfProcessor(std::string file_address) : BdfReader(file_address)
{
    for (auto card : _content)
    {
        Entry temp_card;
        int char_count = 1;
        for (auto elem : card)
        {
            std::string word;
            if (char_count % 9 != 0)
            {
                word.push_back(elem);
                char_count += 1;
            }
            else
            {
                temp_card.push_back(word);
            }
        }
        _bdf_content.push_back(temp_card);
    }
}