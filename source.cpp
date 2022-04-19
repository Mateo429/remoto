#include <cmath>
#include <iostream>

double foo(double a, double b);
double bar(double a, double b);
double baz(double x);
/////////////////////////////////////////////////////////
int main(int argc, char **argv) {
  double ii, jj;
  ii = 0;
  jj = -1;
  foo(ii, jj);
  foo(jj, ii);
  baz(25.9);

  return EXIT_SUCCESS;
}
/////////////////////////////////////////////////////////////
double foo(double a, double b) {

  double val = 0;

  if (a == 0 || b == 0 || 2 * a == b) {

    val = 0;
  }

  else {

    val = (a / b) + (b / bar(a, b)) + (b / a);
  }

  return val;
}
//////////////////////////////////////////////////////////////
double bar(double a, double b) {
  double c = std::fabs(a);
  return (c + a) - b;
}
//////////////////////////////////////////////////////////////
double baz(double x) {

  return std::sqrt(x);

}
