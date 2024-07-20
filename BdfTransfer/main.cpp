#include "./include/bdfTransfer.h"

int main()
{
    BdfReader reader("/home/wxj/wuxingjie/BdfTransfer/BDF/example.bdf");
    reader.Read()
    
    BdfProcessor processor();
    //trybdf.show();
    trybdf.trans();
    return 0;
}