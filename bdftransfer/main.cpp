#include "include/Reload.h"
#include "include/DATEMODEL/DateModel.h"


int main()
{
    Reload rd;
    rd.reload();
    rd.RemoveBlack();
    DateModel db(rd._init_file);
    db.Transfer();
    // for (auto entry : rd._init_file)
    // {
    //     for (auto elem : entry)
    //     {
    //         std::cout << elem << ",";
    //     }
    //     std::cout << std::endl;
    // }

    return 0;
}