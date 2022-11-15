//
// Created by 25952 on 2022/11/15.
//

#ifndef EXO_2_MATRIX_H
#define EXO_2_MATRIX_H
#include "iostream"
#include "cstdlib"
#include "ctime"


class Matrix {
    friend void test();
private:
    int row;
    int col;
    double **matrix;
public:
    Matrix(int row, int col);
    std::string getMatrixString();
    void randomPopulate();
};


#endif //EXO_2_MATRIX_H
