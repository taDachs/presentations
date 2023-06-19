#ifndef MATRIX_H
#define MATRIX_H

#include <vector>

class Matrix {
private:
  int rows_;
  int cols_;
  std::vector<float> values_;

public:
  Matrix(int rows, int cols, const std::vector<float> &values);
  int getRows() const { return rows_; }
  int getCols() const { return cols_; }
  float getAt(int row, int col) const { return values_.at(row * cols_ + col); }

  Matrix multiply(const Matrix &matrix) const;

  Matrix transpose() const;

  void print() const;
};

#endif // MATRIX_H
