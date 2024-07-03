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
        DisplayVec(content);
        cout << "content's size is " << content.size() << endl;
        cout << "1th rol of second element:" << content[0][1] << endl;
        cout << 0%9 << endl;
    }
    else
    {
        cout << "bdf is not open" << endl;

    }

    bdf.close();

    return 0;
}