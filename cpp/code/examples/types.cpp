#include <string>
#include <vector>

int main() {
  // standard numeric types
  unsigned int foo = 34;
  float bar = 35;
  long long unsigned int baz = foo + bar;
  // chars and strings
  char c = 'm';
  std::string str = "string object";
  // lists/arrays
  std::vector<int> vec = {1,2,3,4};

  return 0;
}
