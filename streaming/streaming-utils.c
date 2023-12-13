#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int add(int a, int b) {
  return a + b;
}

EMSCRIPTEN_KEEPALIVE
int substract(int a, int b) {
  return a - b;
}

EMSCRIPTEN_KEEPALIVE
int multiply(int a, int b) {
  return a * b;
}

EMSCRIPTEN_KEEPALIVE
int divide(int a, int b ) {
  return a / b;
}

EMSCRIPTEN_KEEPALIVE
int sumOfNInteger2(int n) {
  return divide(multiply(n, substract(n, 1)), 2);
}
