// 매크로의 문제점
#include <stdio.h>

#define SQUARE(X) X*X

// 36이 아니라 11이 출력된다.
// 매크로는 역할에 충실하기 때문에 해당 문제가 발생한다.
// SQUARE(a + 1)은 a + 1 * a + 1 이다.
// 따라서 a + a + 1로 해석이 된다.
// 이를 방지하기 위해서는 SQUARE를 아래와같이 적어야한다.

#define SQUARE2(X) (X)*(X)

// 그렇다면 100/ SQUARE(a) 는 어떨까
// 이것또한 나눗셈이 전체가 아닌 왼쪽의 X에만 적용이 되었기 때문이다.
// 이를 방지하기 위해서는 SQUARE를 전체적으로 괄호롤 묶어주어야한다.

#define SQUARE3(X) ((X)*(X))

int main() {
  int a = 5;
  printf("%d\n", SQUARE(a + 1));
  printf("%d\n", SQUARE2(a + 1));
  printf("%d\n", 100 / SQUARE2(a));
  printf("%d\n", 100 / SQUARE3(a));
}