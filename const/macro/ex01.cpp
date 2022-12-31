#include <stdio.h>

#define MAIN int main
#define ULL unsigned long long
#define NUM 1234
#define PLUS +
#define PNT printf

MAIN() { // int main()
  ULL m = NUM PLUS 1; // unsigned long long m = 1234 + 1
  PNT("%d\n", NUM); // printf("%d\n", 1234)
}

// 매크로는 지정된 이름을 소스코드를 컴파일 하기전에, 지정된 표현을 다른 표현으로 교체하는것이다.
// 따라서 왠만하면 모든 표현을 다 정의할 수 있다.
