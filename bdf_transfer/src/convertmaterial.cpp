#include "../include/convertmaterial.h"
#include <fstream>
#include <iostream>
#include <vector>

RodTranslator::RodTranslator(std::string bdfaddress)
{
    auto *_rod = new ROD;
    auto *_prod = new PROD;
    auto *_mat1 = new MAT1;

    std::fstream bdf;
    bdf.open(bdfaddress, std::ios_base :: in);
    if (bdf.is_open())
    {
        std::cout << "bdf file is openned" << std::endl;
        //read bdf file
        std::string *content_line = new std::string;
        std::vector<std::string> content;
        while (bdf.good())
        {
            getline(bdf, *content_line);
            content.push_back(*content_line);
        }
        delete content_line;

        //read and determine entry
        std::vector<std::vector<std::string>> bdf_entry;  //bdf type file
        for (auto entry : content)
        {
            int *char_count = new int(1);
            std::vector<std::string> *vec_str = new std::vector<std::string>;
            for (auto word = entry.cbegin();
                word != entry.cend();
                word++)
                {
                    std::string *entry_word = new std::string;
                    if (*char_count % 8 != 0)
                    {
                        entry_word->push_back(*word);
                    }
                    else
                    {
                        vec_str->push_back(*entry_word);
                        delete entry_word;
                    }                    
                }
            bdf_entry.push_back(*vec_str);
            delete vec_str;
            delete char_count;
        }



    }
    else
    {
        std::cout << "file open failed" << std::endl;
    }
}

RodTranslator::~RodTranslator()
{
    delete _rod;
    delete _prod;
    delete _mat1;
}