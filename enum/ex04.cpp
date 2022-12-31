#include <stdio.h>
// enum키워드 사용
enum {
  A1,
  A2,
  A3,
  A4,
};
enum {
  B1 = 10,
  B2 = 20,
  B3 = 30,
  B4 = 40,
};
// enum은 위와같이 특정 정수로 표현가능하다.
enum {
  C1 = 10,
  C2,
  C3 = 30,
  C4,
};
// 특정 정수를 선별적으로 표기하면 생략한 상수의 값은 바로전 상수의 값 +1 이 된다.

int main() {
  printf("%d %d %d %d\n", A1, A2, A3, A4);
  printf("%d %d %d %d\n", B1, B2, B3, B4);
  printf("%d %d %d %d\n", C1, C2, C3, C4);
};
// enum은 값을 출력한다.