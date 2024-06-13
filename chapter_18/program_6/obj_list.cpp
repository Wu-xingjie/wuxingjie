#include<iostream>
#include<list>
using namespace std;

struct ContactItem
{
    string name_;
    string phone_;
    string display_;

    ContactItem(string name, string phone)
    {
        name_ = name;
        phone_ = phone;
        display_ = name + " : " + phone;
    }

    bool operator < (const ContactItem& itemtocompare)
    {
        return (this ->name_ < itemtocompare.name_);
    }

    bool operator == (const ContactItem& itemtocompare)
    {
        return (this->name_ == itemtocompare.name_);
    } 
};

ostream & operator << (ostream& out,ContactItem& item)
{
    out << item.name_ << ":" << item.phone_;
    return out;
}

template<typename T>
void displaycontainer(const T& container)
{
    auto element = container.begin();
    while(element != container.end())
    {
        cout << *element;
        element++;
        cout << endl;
    }
}

bool sortonphonename(const ContactItem& container1,const ContactItem& container2)
{
    return (container1.phone_ > container2.phone_);
}

int main()
{
    list<ContactItem> contacts;

    contacts.push_back(ContactItem("wxj","122350"));
    contacts.push_back(ContactItem("cx","123456"));
    contacts.push_back(ContactItem("bst","98765431"));

    contacts.sort(sortonphonename);
    auto element = contacts.begin();
    while(element != contacts.end())
    {
        cout << *element;
        element++;
        cout << endl;
    }
    //displaycontainer(contacts);

    return 0;
}