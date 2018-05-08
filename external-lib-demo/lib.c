#include <stdio.h>
#include <emscripten.h>
// 这里也可以不用标注，用命令行的形式指定 expot 哪些接口
EMSCRIPTEN_KEEPALIVE
void sayHi() {
  printf("Hi!\n");
}

EMSCRIPTEN_KEEPALIVE
int daysInWeek() {
  return 7;
}
