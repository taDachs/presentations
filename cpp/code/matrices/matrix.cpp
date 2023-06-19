#include "matrix.h"
#include <iostream>

Matrix::Matrix(int rows, int cols, const std::vector<float> &values)
    : rows_(rows), cols_(cols), values_(values) {}

Matrix Matrix::multiply(const Matrix &other) const {
  int out_rows = rows_;
  int out_cols = other.getCols();
  std::vector<float> res(out_rows * out_cols);
  for (int i = 0; i < out_rows; i++) {
    for (int j = 0; j < out_cols; j++) {
      float sum = 0;
      for (int offset = 0; offset < other.getRows(); offset++) {
        sum += getAt(i, offset) * other.getAt(offset, j);
      }
      res.at(i * out_cols +  j) = sum;
    }
  }

  return Matrix(out_rows, out_cols, res);
}

void Matrix::print() const {
  for (int i = 0; i < rows_; i++) {
    for (int j = 0; j < cols_; j++) {
      std::cout << getAt(i, j) << " ";
    }
    std::cout << "\n";
  }
}

Matrix Matrix::transpose() const {
  std::vector<float> res(rows_ * cols_);

  for (int i = 0; i < rows_; i++) {
    for (int j = 0; j < cols_; j++) {
      res.at(j * rows_ + i) = getAt(i, j);
    }
  }

  return Matrix(cols_, rows_, res);
}
