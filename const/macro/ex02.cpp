#include <stdio.h>

#define SQUARE(X) X*X
// 매크로는 위와같이 함수처럼 사용할 수 있다.

int main() {
  int a = 5;
  printf("%d\n", SQUARE(a));
}
