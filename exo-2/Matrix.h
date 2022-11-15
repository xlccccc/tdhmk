//
// Created by 25952 on 2022/11/9.
//

#ifndef EXO_2_MATRIX_H
#define EXO_2_MATRIX_H
#include "iostream"
#include "cstdlib"


class Matrix {
private:
    int row;
    int col;
    double **matrix;
public:
    Matrix(int row, int col);
    Matrix(const Matrix &obj);
    ~Matrix();
    Matrix operator+(Matrix &m);
    Matrix operator*(Matrix &m);
    Matrix operator=(Matrix &m);
    friend std::ostream &operator<<(std::ostream &os, const Matrix &matrix);
    friend std::istream &operator>>(std::istream &is, Matrix &matrix);
    void randomPopulate();
};


#endif //EXO_2_MATRIX_H
