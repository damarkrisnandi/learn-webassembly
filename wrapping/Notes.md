# Ccall and Cwrap

## Description
Call my main function of wrapping.c

## Compilation
Should add ``include <emscripten.h>`` and add ``EMSCRIPTEN_KEEPALIVE`` above every function on wrapping.c.

and then

```
emcc wrapping.c -s NO_EXIT_RUNTIME=1 -s EXPORTED_RUNTIME_METHODS=[ccall]
```

```
http-server . -p 4555
```
