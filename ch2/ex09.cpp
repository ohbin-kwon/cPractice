// 비교 연산
#include <stdio.h>

int main() {
  int a = 30, b = 50;
  bool p = a > b;
  bool q = a < b;
  bool r = a == b;
  printf("%d\n", p);
  printf("%d\n", q);
  printf("%d\n", r);

  bool s = 1;
  bool t = true;
  printf("%d %d\n", s, t);
  // bool값에는 정수형 또는 true, false를 넣어도 무방하다.
}
