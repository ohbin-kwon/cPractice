// sizeof
#include <stdio.h>

int main() {
  printf("%d %d %d %d\n", sizeof(int), sizeof(char), sizeof(float), sizeof(double));
  int a; char b; float c; double d;
  printf("%d %d %d %d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));
}
// sizeof를 사용하면 자료형 또는 변수의 크기를 알 수 있다. sizeof는 unsigned long이므로 %d의 정수 자료형에 맞지 않는 warning이 발생한다.