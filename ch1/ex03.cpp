#include <stdio.h>

int main()
{
  // %d: 정수 출력
  printf("%d + %d = %d\n", 2, 3, 5);
  // %f: 실수 출력 (기본적으로 6개의 자릿수를 출력하며, 자릿수를 지정하려면 아래와같이 사용하면 된다.)
  printf("%f\n", 3.14);
  printf("%.2f\n", 3.14159);
  // %c: 1글자 출력(ascii코드만 출력이 가능하다.)
  printf("%c %c %c\n", 'a', 'b', 'c');
  // %s: 문자열 출력
  printf("%s\n", "안녕하세요");
}
// single quote vs double quote in C
// single quotes are characters(char)
// double quotes are null-terminated strings(char *)