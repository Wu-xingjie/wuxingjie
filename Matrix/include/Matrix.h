#pragma once

#include <iostream>
#include "VectorMulti.h"

typedef std::vector<std::vector<double>> MATRIX;

class Matrix : private VectorMulti
{
    public:
        Matrix();
        Matrix(int row, int col);

        Matrix operator += (const Matrix& matrix);
        Matrix operator -= (const Matrix& matrix);
        Matrix operator *= (const Matrix& matrix);

        void show();
    private:
        int _row;
        int _col;
        MATRIX _matrix;
};