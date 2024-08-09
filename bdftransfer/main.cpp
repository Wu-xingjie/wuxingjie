#include "include/Reload.h"
#include "include/DateModel.h"


int main()
{
    Reload rd;
    rd.reload();
    rd.RemoveBlack();
    rd.LongEntry();

    // std::cout << "----------------------" << std::endl;
    // for (auto elem : rd._execute_file)
    // {
    //     std::cout << elem << std::endl;
    // }
    // std::cout << "----------------------" << std::endl;
    // for (auto elem : rd._case_file)
    // {
    //     std::cout << elem << std::endl;
    // }
    // std::cout << "----------------------" << std::endl;
    // for (auto entry : rd._date_file)
    // {
    //     for (auto elem : entry)
    //     {
    //         std::cout << elem;
    //     }
    //     std::cout << std::endl;
    // }
    DateModel db(rd._date_file);

    db.CBARCatch();
    db.MAT1Catch();
    db.Transfer();

    return 0;
}