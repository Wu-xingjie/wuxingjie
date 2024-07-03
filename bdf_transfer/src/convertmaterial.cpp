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
        //read bdf file
        std::cout << "bdf file is openned" << std::endl;
        std::string *content_line = new std::string;
        std::vector<std::string> content;
        while (bdf.good())
        {
            getline(bdf, *content_line);
            content.push_back(*content_line);
        }

        //read and determine entry
        std::vector<std::vector<std::string>> bdf_entry;  //bdf type file



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