// 형변환(type conversion)
#include <stdio.h>

int main() {
  int a = 3.14;
  float b = 10;
  // int에 3.14를 넣으면 정수의 형태로 형변환 되며, float에 10을 넣으면 부동소수점 형태로 형변환 된다.

  printf("a = %d, b = %f\n", a, b);

  int math = 90, korean = 95, english = 96;
  int sum = math + korean + english;
  double avg = sum / 3;

  printf("평균 : %f\n", avg);
  // 평균은 93.6666.. 이 출력되어야 하지만 93.000000이 출력이 된다.
  // 이는 13번쨰줄의 sum/3의 결과 값이 정수이므로 double에 형변환이 될떄 이미 93이라는 정수가 담겨지기 떄문이다.
  // 따라서 평균을 구할떄 실수의 값으로 계산해야한다.
  double avg2 = (double)sum / 3;
  printf("평균 : %f\n", avg2);
  // 위와 같이 변수의 자료형을 수동으로 형변환 할 수 있다.

}