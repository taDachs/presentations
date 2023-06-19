#include "matrix.h"
#include <iostream>

int main() {
  Matrix a(3, 3, {3, 2, 1,
                  3, 1, 3,
                  2, 1, 0});

  Matrix b(3, 3, {1, 0, 0,
                  0, 1, 0,
                  0, 0, 1});

  Matrix res = a.multiply(b);
  res.print();
  std::cout << "---" << std::endl;

  Matrix x(3, 1, {1, 2, 3});
  res = a.multiply(x);
  res.print();
  std::cout << "---" << std::endl;

  res = x.transpose();
  res.print();
  std::cout << "---" << std::endl;

  Matrix c(5, 3, {1, 0, 0,
                  0, 1, 0,
                  0, 2, 0,
                  0, 3, 0,
                  0, 0, 1});
  res = c.transpose();
  res.print();
  return 0;
}
