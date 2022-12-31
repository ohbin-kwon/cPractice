// 매크로 활용
// 매크로를 사용하면 프로그램이 컴파일 되기전에 모든 PI가 3.14159265로 교체된다.
// 따라서 변수(상수)처럼 메모리에 존재하는 것이 아니라, 3.14159265라는 별칭으로 사용된다. 상수처럼 사용할 수 있는것이다.(마찬가지로 재할당도 불가능하다.)
#include <stdio.h>
#define PI 3.14159265


double getArea(double r) {
  return PI * r * r;
};

int main() {
  printf("%f\n", getArea(3));
  // PI = 3;
  // complie error. const로 선언되었기 때문에 새로운 값을 대입할 수 없다.
}