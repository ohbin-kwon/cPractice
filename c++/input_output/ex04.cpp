// stdio.h와 다르게 iostream은 똑똑하게 자료형에 맞춰서 출력을 수행한다.
// 따라서 %d, %f와 같은 출력의 형태를 표현할 필요가 없다.
#include <iostream>

using std::cout;
using std::endl;

int main() {
  int a = 5;
  double b = 3.45432323;
  char c = 'd';

  cout << a << ' ' << b << ' ' << c << endl;
}