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
    for(int i = 0; i< col; i++)
    {
        std::vector<double> matrix_rol;
        for(int j = 0; j < col; j++)
        {
            double elem = 0;
            std::cout << "[" << i + 1 << ", " << j + 1 << "] = ";
            std::cin >> elem;
            matrix_rol.push_back(elem);
            
        }
        _matrix.push_back(matrix_rol);
    }
}

Matrix Matrix::operator += (const Matrix& matrix)
{
    for (int i = 0; i < matrix._matrix.size(); i++)
    {
        for (int j = 0; j < matrix._matrix.at(i).size(); j++)
        {
            this->_matrix.at(i).at(j) += matrix._matrix.at(i).at(j);
        }
    }
    return *this;
}

Matrix Matrix::operator -= (const Matrix& matrix)
{
    for (int i = 0; i < matrix._matrix.size(); i++)
    {
        for (int j = 0; j < matrix._matrix.at(i).size(); j++)
        {
            this->_matrix.at(i).at(j) -= matrix._matrix.at(i).at(j);
        }
    }
    return *this;
}

Matrix Matrix::operator *= (const Matrix& matrix)
{
    Matrix result;
    result._row = this->_row;
    result._col = matrix._col;
    VEC init_row(result._col, 0);

    result._matrix.resize(result._row, init_row);
    for (auto elem : result._matrix)
    {
        elem.resize(result._col);
    }

    VEC col_multi(matrix._row);
    for (int i = 0; i < result._row; i++)
    {
        for (int j = 0; j < result._col; j++)
        {
            for (int num = 0; num < matrix._row; num++)
            {
                col_multi.at(num) = matrix._matrix.at(num).at(j);
            }
            result._matrix.at(i).at(j) = Multi(this->_matrix.at(i), col_multi);
        }
    }    
    result.show();
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