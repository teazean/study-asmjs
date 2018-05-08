```shell
emcc lib.c -o lib.out.js -s EXTRA_EXPORTED_RUNTIME_METHODS='["ccall", "cwrap"]'
```
