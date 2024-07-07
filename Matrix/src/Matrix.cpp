#include "../include/Matrix.h"


Matrix::Matrix()
{
    _row = 0;
    _col = 0;
    MATRIX _matrix;
}

Matrix::Matrix(int row, int col)
{
    _row = row;
    _col = col;

    std::cout << "input element of this matrix:" << std::endl;
    for(int i = 0; i< _col; i++)
    {
        std::vector<double> matrix_rol;
        for(int j = 0; j < _col; j++)
        {
            double elem = 0;
            std::cout << "[" << i + 1 << ", " << j + 1 << "] = ";
            std::cin >> elem;
            matrix_rol.push_back(elem);
            
        }
        _matrix.push_back(matrix_rol);
    }
}

MATRIX &Matrix::operator+=(const MATRIX &matrix_1)
{
    MATRIX result;
    int row_index = 0;
    int col_index = 0;
    for(auto row : matrix_1)
    {
        std::vector<double> result_row;
        for (auto elem : row)
        {
            result_row.push_back(_matrix.at(row_index).at(col_index) + elem);
            col_index++;
        }
        result.push_back(result_row);
        row_index++;
    }
    return result;
}

void Matrix::show()
{
    for (auto row : _matrix)
    {
        for (auto elem : row)
        {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
}