#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void DisplayVec(const vector<string>& bdfcontent)
{
    for(auto elem = bdfcontent.cbegin();
        elem != bdfcontent.cend();
        elem++)
        {
            cout << *elem << endl;
        }
}

ostream &operator<<(ostream &output, vector<string>T)
{
    for (int i = 0;i<T.size();i++)
    {
        output << T[i];
    }
    return output;
}

int main()
{
    fstream bdf;
    string address = "/home/wxj/wuxingjie/bdf_transfer/example.bdf";
    bdf.open(address, ios_base::in);

    if (bdf.is_open())
    {
        std::cout << "bdf file is openned" << std::endl;
        std::string *content_line = new std::string;
        std::vector<std::string> content;
        while (bdf.good())
        {
            getline(bdf, *content_line);
            content.push_back(*content_line);
        }
        delete content_line;


        std::vector<std::vector<std::string>> bdf_entry;  //bdf type file
        for (auto entry : content)
        {
            int *char_count = new int(1);
            std::vector<std::string> *bdf_line = new std::vector<std::string>;
            
            cout << entry << endl;
            for (auto word : entry)
                {
                    //cout << *word;
                    //cout << *char_count;
                    std::string *entry_word = new std::string;
                    if (*char_count % 8 != 0)
                    {
                        entry_word->push_back(word);
                        //out << *entry_word;
                    }
                    else
                    {
                        entry_word->push_back(word);
                        //bdf_line->push_back(*entry_word);
                        //cout << *entry_word << endl;
                        delete entry_word;
                    }   
                    *char_count += 1;                 
                }
            cout << *bdf_line << endl;
            bdf_entry.push_back(*bdf_line);
            delete bdf_line;
            delete char_count;
        }
        cout << "................" << endl;
        for (auto elem : bdf_entry)
        {
            cout << elem << endl;
        }

    }
    else
    {
        cout << "bdf is not open" << endl;

    }

    bdf.close();

    return 0;
}