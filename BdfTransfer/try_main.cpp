#include <string>
#include <list>
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

typedef std::list<std::string> Entry;

class BdfReader
{
    public:
        BdfReader(std::string bdf_file_address)
         : _bdf_file_address(bdf_file_address){};
        void Read();
        std::list<std::string> OutPut();

    private:
        std::list<std::string> _content;
        std::string _bdf_file_address;
};
class BdfProcessor
{
    public:
        BdfProcessor(const Entry& src_content)
        : _src_content(src_content){};
        void RemoveNote();
        void Process();
        std::list<Entry> GetResult(); 
        
    private:
        std::list<std::string> _src_content;
        std::list<Entry> _bdf_content;
};

class BdfTransfer
{
    public:
        BdfTransfer(const std::list<Entry>& standard_bdf)
        : _standard_bdf(standard_bdf){};
        void trans();
        void show();

    private:
        std::list<Entry> _standard_bdf;
};

class TransferTool
{
    public:
        TransferTool(std::string file_address)
         : _file_address(file_address){};
        void Transfer();
    
    private:
        std::string _file_address;
};

void BdfReader::Read()
{
    std::fstream file;
    file.open(_bdf_file_address, std::ios_base::in);
    if(file.is_open())
    {
        std::string bdf_line;
        while (file.good())
        {
            getline(file, bdf_line);
            if (bdf_line != "\r")
            {
                bdf_line.pop_back();
                _content.push_back(bdf_line);
            }
        }
    }
    else
    {
        std::cout << "bdf isn't open" << std::endl;
    }
    file.close();
}

std::list<std::string> BdfReader::OutPut()
{
    return _content;
}


void BdfProcessor::RemoveNote()
{
    for (auto &entry : _src_content)
    {
        int loc = entry.find('$', 0);
        if (loc != string::npos)
        {
            // cout << "[" << loc << ", " << entry.size() << "]" << endl;
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

std::list<Entry> BdfProcessor::GetResult()
{
    return _bdf_content;
}

void BdfTransfer::show()
{
    for (auto entry : _standard_bdf)
    {
        for (auto elem : entry)
        {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
}

void BdfTransfer::trans()
{
    std::fstream file;
    file.open("/home/wxj/wuxingjie/BdfTransfer/BDF/result.txt", std::ios_base::out);
    if (file.is_open())
    {
        for (auto entry : _standard_bdf)
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

void TransferTool::Transfer()
{
    BdfReader reader(_file_address);
    reader.Read();

    BdfProcessor processor(reader.OutPut());
    processor.RemoveNote();
    processor.Process();

    auto file_processor = processor.GetResult();
    
    BdfTransfer transfer(processor.GetResult());
    transfer.trans();
}

int main()
{
    TransferTool bdftransfer("/home/wxj/wuxingjie/BdfTransfer/BDF/example.bdf");
    bdftransfer.Transfer();
    return 0;
}