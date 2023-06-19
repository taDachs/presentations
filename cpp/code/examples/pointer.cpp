int main() {
  int x = 34;
  int* x_ptr = &x;
  int* y_ptr = x_ptr;
  *y_ptr = 35;

  x == *y_ptr; // true

  return 0;
}
