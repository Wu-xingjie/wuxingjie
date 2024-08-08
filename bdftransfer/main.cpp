#include "include/Reload.h"
#include "include/DateModel.h"


int main()
{
    Reload rd;
    rd.reload();
    rd.RemoveBlack();
    rd.LongEntry();
    DateModel db(rd._init_file);

    db.CBARCatch();
    db.MAT1Catch();
    db.Transfer();

    return 0;
}