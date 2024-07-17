#include <string>
#include <vector>
#include <fstream>
#include <iostream>

class BdfReader
{
    public:
        BdfReader(std::string bdf_file_address);
        std::vector<std::string> _content;
};

typedef std::vector<std::string> Entry;

class BdfProcessor : public BdfReader
{
    public:
        BdfProcessor(std::string file_address);
        
        std::vector<Entry> _bdf_content;
};

class BdfTransfer : private BdfProcessor
{
    public:
        BdfTransfer(std::string file_address): BdfProcessor(file_address){}
        void trans();
        void show();

};

BdfProcessor::BdfProcessor(std::string file_address) : BdfReader(file_address)
{
    for (auto card : _content)
    {
        //std::cout << card << std::endl;
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
    //std::cout << std::endl;
    // for (auto entry : _bdf_content)
    // {
    //     for (auto elem : entry)
    //     {
    //         std::cout << elem;
    //     }
    //     std::cout << std::endl;
    // }
}

BdfReader::BdfReader(std::string bdf_file_address)
{
    std::fstream file;
    file.open(bdf_file_address, std::ios_base::in);
    if(file.is_open())
    {
        std::string bdf_line;
        while (file.good())
        {
            getline(file, bdf_line);
            _content.push_back(bdf_line);
        }
    }
    else
    {
        std::cout << "bdf isn't open" << std::endl;
    }
    file.close();
}

void BdfTransfer::trans()
{
    std::fstream file;
    file.open("./BDF/result.txt", std::ios_base::out);
    if (file.is_open())
    {
        for (auto entry : _bdf_content)
        {
            for (auto word : entry)
            {
                file << word;
            }
            file << std::endl;
        }
    }
    else
    {
        std::cout << "file open failed" << std::endl;
    }
    file.close();
}

void BdfTransfer::show()
{
    for (auto entry : _bdf_content)
    {
        for (auto elem : entry)
        {
            std::cout << elem;
        }
        std::cout << std::endl;
    }
}

int main()
{
    BdfTransfer trybdf("/home/wxj/wuxingjie/BdfTransfer/BDF/example.bdf");
    //trybdf.show();
    trybdf.trans();
    return 0;
}