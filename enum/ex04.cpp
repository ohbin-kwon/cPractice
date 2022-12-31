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
enum {
  C1 = 10,
  C2,
  C3 = 30,
  C4,
};

int main() {
  printf("%d %d %d %d\n", A1, A2, A3, A4);
  printf("%d %d %d %d\n", B1, B2, B3, B4);
  printf("%d %d %d %d\n", C1, C2, C3, C4);
};
// 위와 같이 한 대상이 가질 수 있는 다양한 가능한 값들을 0, 1, 2 등의 상수로 나타낸 것을 enumeration(열거형)이라고 한다.
// c언어에서는 enum키워드를 이용해 표현할 수 있다.