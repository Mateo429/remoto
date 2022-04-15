#include <cmath>
#include <cstdlib>
#include <iostream>

int foo(int a, int b);
int bar(int a, int b);
double baz(double x);

int main(int argc, char **argv) {
  int ii, jj;
  ii = 0;
  jj = -1;
  foo(ii, jj);
  foo(jj, ii);
  std::cout << baz(25.9) << std::endl;

  return EXIT_SUCCESS;
}

int foo(int a, int b) {

  double out = 0;
  if (a == 0 || b == 0) {
    out = 0;
  } else {

    out = a / b + b / bar(a, b) + b / a;
  }

  return out;
}

int bar(int a, int b) {

  unsigned int c = a;
  return c + a - b;
}

double baz(double x) {
  if (x == 0) { // Error en la sintaxis se poner un return; que no devuelve
                // nada, hace falta abrir los corchetes luego del condicional

    double v = 1 - (x + 1);
  }
  return std::sqrt(x); // Error en la sintaxis básica ;
}
