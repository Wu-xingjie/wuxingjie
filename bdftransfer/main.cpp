#include "include/Reload.h"
#include "include/DateModel.h"


int main()
{
    Reload rd;
    rd.reload();
    rd.RemoveBlack();
    DateModel db(rd._init_file);

    db.MAT1Catch();
    db.Transfer();
    // for (auto entry : rd._init_file)
    // {
    //     if (entry[0] == "MAT1")
    //     {
    //         for (int i = 0; i < 9; i++)
    //         {
    //             std::cout << entry[i] << ",";
    //         }
    //     }
    // }

    return 0;
}