#include <stdio.h>

int main() {
  float a = 4.7;
  float b = 1.8;
  float add = a + b;
  float sub = a - b;
  float mul = a * b;
  float div = a / b;

  printf("%f + %f = %f\n", a, b, add);
  printf("%f - %f = %f\n", a, b, sub);
  printf("%f * %f = %f\n", a, b, mul);
  printf("%f / %f = %f\n", a, b, div);
  // 실수의 연산의 결과는 실수이다.
  // 부동 소수점의 오차는 double자료형을 이용해 좀더 정밀한 연산을 수행할 수 있다.
}
