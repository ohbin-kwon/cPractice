#include <stdio.h>

int main() {
  int a = 5;
  int b;

  // 전치 증가(감소) 연산 : ++ 또는 -- 를 앞에다 사용하면, 연산이 끝난 값을 변수에 대입
  b = ++a;
  printf("a = %d\n", a);
  printf("b = %d\n", b);
    // 후치 증가(감소) 연산: ++ 또는 --를 뒤에 사용하면, 변수에 대입후 연산을 실행

  b = a++;
  printf("a = %d\n", a);
  printf("b = %d\n", b);

}