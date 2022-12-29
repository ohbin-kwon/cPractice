// 자료형 : int와 float
// int는 정수(32bit), float는 실수(32bit)를 저장하는 자료형
// 자료형의 종류에 따라 data를 해석하는 방식이 달라짐
#include <stdio.h>

int main() {
  int a = 5;
  int b = 3;
  int add = a + b;
  int sub = a - b;
  int mul = a * b;
  int div = a / b;
  int mod = a % b;

  printf("%d + %d = %d\n", a, b, add);
  printf("%d - %d = %d\n", a, b, sub);
  printf("%d * %d = %d\n", a, b, mul);
  printf("%d / %d = %d\n", a, b, div);
  printf("%d %% %d = %d\n", a, b, mod);
  // 정수의 연산의 결과는 정수이다.
}
