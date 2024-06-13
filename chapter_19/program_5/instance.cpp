#include<set>
#include<iostream>
#include<string>
using namespace std;

template<typename T>
void DisplayContacts(const T& container)
{
    for(auto ielemnt = container.cbegin();
        ielemnt != container.cend();
        ielemnt++)
    {
        cout << *ielemnt << endl;
    }
    cout << endl;
}

struct ContactItem
{
    string name;
    string phoneNum;
    string displayAs;

    ContactItem(const string& nameInit, const string& phone)
    {
        name = nameInit;
        phoneNum = phone;
        displayAs = (name + ":" + phoneNum);
    }
    bool operator == (const ContactItem& itemtocompaire)  const
    {
        return (itemtocompaire.name == this -> name);
    }
    bool operator < (const ContactItem& itemtocompaire)  const
    {
        return (this -> name < itemtocompaire.name);
    }
    operator const char*() const
    {
        return displayAs.c_str();
    }
};

int main()
{
    set<ContactItem> setContacts;
    setContacts.insert(ContactItem("wxj","122350"));
    setContacts.insert(ContactItem("cx","123456"));
    DisplayContacts(setContacts);

    cout << "enter a name you want to delete: ";
    string delname;
    cin >> delname;

    auto elem_del = setContacts.find(ContactItem(delname,""));
    if(elem_del != setContacts.end())
    {
        setContacts.erase(elem_del);
        DisplayContacts(setContacts);
    }
    else
    {
        cout << "not found" << endl;
    }

    return 0;
}
