#include "include/Reload.h"
#include "include/DateModel.h"


int main()
{
    Reload rd;
    rd.reload();
    rd.RemoveBlack();
    for (auto entry : rd._init_file)
    {
        for (auto elem : entry)
        {
            std::cout << elem << ", ";
        }
        std::cout << std::endl;
    }
    rd.LongEntry();
    std::cout << "........................." << std::endl;
    for (auto entry : rd._init_file)
    {
        for (auto elem : entry)
        {
            std::cout << elem << ", ";
        }
        std::cout << std::endl;
    }

    DateModel db(rd._init_file);

    db.CBARCatch();
    db.MAT1Catch();
    db.Transfer();

    return 0;
}