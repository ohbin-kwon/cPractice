// c++이 가지는 const의 의미와 js의 const의 의미를 비교해보겠다.
#include <stdio.h>

const double PI = 3.14159265358879;
// const를 이용, 재할당이 불가능하다.

double a = 5;
const double PI2 = a;
// const 변수에 꼭 상수를 초기화할 필요는 없다.
// 즉 const의 의미는 '상수' 라기 보다 재할당이 불가능한 변수라고 생각하면 좋을듯 하다.

// const double A;
// complie error. const로 선언했을때는 초기화가 필요하다.

double getArea(double r) {
  return PI * r * r;
};

int main() {
  printf("%f\n", getArea(3));
  // PI = 3;
  // complie error. const로 선언되었기 때문에 새로운 값을 대입할 수 없다.
}

