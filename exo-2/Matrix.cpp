//
// Created by 25952 on 2022/11/9.
//
#include "Matrix.h"

Matrix::Matrix(int row, int col) {
    this->row = row;
    this->col = col;
    matrix = new double *[row];
}

Matrix::Matrix(const Matrix &obj) {
    this->row = obj.row;
    this->col = obj.col;
    matrix = new double *[row];
    for (int i = 0; i < row; i++) {
        matrix[i] = new double[col];
        for (int j = 0; j < col; j++) {
            matrix[i][j] = obj.matrix[i][j];
        }
    }
}

Matrix::~Matrix() {
    for (int i = 0; i < row; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

Matrix Matrix::operator+(Matrix &m) {
    Matrix result(row, col);
    for (int i = 0; i < row; i++) {
        result.matrix[i] = new double[col];
        for (int j = 0; j < col; j++) {
            result.matrix[i][j] = matrix[i][j] + m.matrix[i][j];
        }
    }
    return result;
}

Matrix Matrix::operator*(Matrix &m) {
    Matrix result(row, m.col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < m.col; j++) {
            result.matrix[i][j] = 0;
            for (int k = 0; k < col; k++) {
                result.matrix[i][j] += matrix[i][k] * m.matrix[k][j];
            }
        }
    }
    return result;
}

Matrix Matrix::operator=(Matrix &m) {
    for (int i = 0; i < row; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
    this->row = m.row;
    this->col = m.col;
    matrix = new double *[row];
    for (int i = 0; i < row; i++) {
        matrix[i] = new double[col];
        for (int j = 0; j < col; j++) {
            matrix[i][j] = m.matrix[i][j];
        }
    }
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Matrix &matrix) {
    for (int i = 0; i < matrix.row; i++) {
        for (int j = 0; j < matrix.col; j++) {
            os << matrix.matrix[i][j] << " ";
        }
        os << std::endl;
    }
    return os;
}

std::istream &operator>>(std::istream &is, Matrix &matrix) {
    for (int i = 0; i < matrix.row; i++) {
        for (int j = 0; j < matrix.col; j++) {
            is >> matrix.matrix[i][j];
        }
    }
    return is;
}



void Matrix::randomPopulate() {
    for (int i = 0; i < row; i++) {
        matrix[i] = new double[col];
        for (int j = 0; j < col; j++) {
            matrix[i][j] = rand() % 10;
        }
    }
}

