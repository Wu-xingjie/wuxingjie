#include <string>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

typedef std::vector<std::string> Entry;

class BdfReader
{
    public:
        BdfReader(std::string bdf_file_address)
         : _bdf_file_address(bdf_file_address){};
        void Read();
        std::vector<std::string> OutPut();

    private:
        std::vector<std::string> _content;
        std::string _bdf_file_address;
};
class BdfProcessor
{
    public:
        BdfProcessor(const Entry& src_content)
        : _src_content(src_content){};
        void RemoveBlank();
        void RemoveNote();
        void Process();
        std::vector<Entry> GetResult(); 
        
    private:
        std::vector<std::string> _src_content;
        std::vector<Entry> _bdf_content;
};

class BdfTransfer
{
    public:
        BdfTransfer(const std::vector<Entry>& standard_bdf)
        : _standard_bdf(standard_bdf){};
        void trans();
        void show();

    private:
        std::vector<Entry> _standard_bdf;
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
            _content.push_back(bdf_line);
        }
    }
    else
    {
        std::cout << "bdf isn't open" << std::endl;
    }
    file.close();
}

std::vector<std::string> BdfReader::OutPut()
{
    return _content;
}

void BdfProcessor::RemoveBlank()
{
    for (auto entry = _src_content.begin();
        entry != _src_content.end();
        entry++)
    {
        //cout << *entry << endl;
        bool isempty = true;
        for (auto elem : *entry)
        {
            if (elem != '\n')
            {
                isempty = false;
                break;
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
        cout << card << endl;

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
    for (auto entry : _bdf_content)
    {
        for (auto elem : entry)
        {
            cout << elem;
        }
        cout << endl;
    }
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

    // auto file = reader.OutPut();
    // for (auto i : file)
    // {
    //     cout << i << endl;
    // }

    BdfProcessor processor(reader.OutPut());
    //processor.RemoveNote();
    processor.RemoveBlank();
    processor.Process();

    auto file_processor = processor.GetResult();
    // for (auto i : file_processor)
    // {
    //     for (auto j : i)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    
    BdfTransfer transfer(processor.GetResult());
    transfer.trans();
}

int main()
{
    TransferTool bdftransfer("/home/wxj/wuxingjie/BdfTransfer/BDF/example.bdf");
    bdftransfer.Transfer();

    return 0;
}