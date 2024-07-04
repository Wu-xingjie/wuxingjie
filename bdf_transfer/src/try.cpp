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

    ostream operator<<(ostream &output, vector<string> T)
    {
        for (int i = 0;i<T.size();i++)
        {
            output << T[i] <<  endl;
        }
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

        for (auto elem1 = bdf_entry.begin(); elem1 != bdf_entry.end(); elem1++)
        {
            cout << *elem1 << endl;
        }


    }
    else
    {
        cout << "bdf is not open" << endl;

    }

    bdf.close();

    return 0;
}