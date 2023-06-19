#include <iostream>

struct Foo {
  int bar;
};

void f(Foo f) {
  f.bar = 1;
}

void g(Foo* f) {
  f->bar = 2;
}

void h(Foo& f) {
  f.bar = 3;
}

int main() {
  Foo foo;
  foo.bar = 420;

  f(foo);
  std::cout << foo.bar << "\n";

  g(&foo);
  std::cout << foo.bar << "\n";

  h(foo);
  std::cout << foo.bar << "\n";

  return 0;
}
