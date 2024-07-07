#include "./include/Matrix.h"

int main()
{
    Matrix matrix1(3,3);
    Matrix matrix2(3,3);
    Matrix matrix1 += matrix2;

    matrix1.show();


    return 0;
}