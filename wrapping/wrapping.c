#include <stdio.h>
#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int addNum(int a, int b) {
  return a + b;
}

EMSCRIPTEN_KEEPALIVE
int substractNum(int a, int b) {
  return a - b;
}

EMSCRIPTEN_KEEPALIVE
int main() {
  printf("hello World!%d\n", addNum(5, 3));

  return 0;
}
