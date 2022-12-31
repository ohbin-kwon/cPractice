#include <stdio.h>

int function1(const int a) {
  printf("%d\n", a);
  // a = 3;
  // printf("%d\n", a);
  // compile error: a는 const로서 parameter a 값을 수정할 수 없음을 의미한다.
}

int main() {
  int b = 5;

  function1(1);
  function1(b);
  // 어떤 값을 넣어도 문제없다. const parameter는 함수내부에서 해당 변수에 재할당이 불가능함을 의미한다.
}