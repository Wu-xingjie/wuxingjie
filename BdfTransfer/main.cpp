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
        void show();

};

BdfProcessor::BdfProcessor(std::string file_address) : BdfReader(file_address)
{
    for (auto card : _content)
    {

        //std::cout << card << " " << std::endl;
        
        Entry temp_card;
        int char_count = 1;
        std::string word;
        for (auto elem : card)
        {
            //std::cout << elem << " ";
            //std::cout << char_count % 9 << " ";
            if ((char_count % 9) != 0)
            {
                //std::cout << char_count % 9 << " ";
                word.push_back(elem);
                // std::cout << word << " ";
                char_count += 1;
            }
            else
            {   
                //std::cout << word << " ";

                temp_card.push_back(word);
                word.clear();
                char_count += 1;
            }
        }
        //     for (auto a : temp_card)
        //         {
        //             std::cout << a << " ";
        //         }
        //     std::cout << std::endl;
        //std::cout << std::endl;        
        _bdf_content.push_back(temp_card);
    }
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

    // for (auto a : _content)
    //     {
    //         std::cout << a << " ";
    //     }
    //     std::cout << std::endl;
}

void BdfTransfer::show()
{
    for (auto entry : _bdf_content)
    {
        for (auto elem : entry)
        {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    BdfTransfer trybdf("/home/wxj/wuxingjie/BdfTransfer/BDF/example.bdf");
    trybdf.show();
    return 0;
}