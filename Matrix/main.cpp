#include "./include/Matrix.h"

int main()
{
    Matrix matrix1(2,2);
    matrix1.show();

    Matrix matrix2(2,2);
    matrix2.show();


    matrix1 *= matrix2;
    matrix1.show();


    return 0;
}