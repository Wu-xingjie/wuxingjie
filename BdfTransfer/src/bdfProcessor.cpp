#include "../include/bdfProcessor.h"

BdfProcessor::BdfProcessor(std::string file_address) : BdfReader(file_address)
{
    for (auto card : _content)
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