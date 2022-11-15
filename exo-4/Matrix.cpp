//
// Created by 25952 on 2022/11/15.
//
#include "Matrix.h"

Matrix::Matrix(int row, int col) {
    this->row = row;
    this->col = col;
    matrix = new double *[row];
}

void Matrix::randomPopulate() {
    srand(time(NULL));
    for (int i = 0; i < row; i++) {
        matrix[i] = new double[col];
        for (int j = 0; j < col; j++) {
            matrix[i][j] = rand() % 11 / (double)(11);
        }
    }
}

std::string Matrix::getMatrixString() {
    std::string result;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result += std::to_string(matrix[i][j]) + " ";
        }
        result += "\n";
    }
    return result;
}