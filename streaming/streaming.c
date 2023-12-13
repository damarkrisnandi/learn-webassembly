#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int sumOfNInteger (int n) {
   return n * (n - 1) / 2;
}
