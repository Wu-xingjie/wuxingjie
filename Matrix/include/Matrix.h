#pragma once

#include <vector>
#include <iostream>

typedef std::vector<std::vector<double>> MATRIX;

class Matrix
{
    public:
        Matrix();
        Matrix(int row, int col);
        MATRIX &operator+(const MATRIX &matrix_1);
        void show();
    private:
        int _row;
        int _col;
        MATRIX _matrix;
};