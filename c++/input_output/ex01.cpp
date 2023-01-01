#include <iostream>
// c++에서는 iostream이라는 입출력 스트림 라이브러리를 주로 사용한다.
int main() {
  std::cout << "Hello, world" << std::endl;
  // std는 namespace가 std임을 말한다.
  // namespace는 말그대로 이름을 담는 공간이다. namespace설명에서 다루겠다.

  // 여기서 사용하는 cout는 printf와같은 함수가 아니라, '객체'이다.
  // << 연산자를 사용하면 오른쪽에 출력하고자하는 내용을 적으면 된다.
  // << 사이에 두고 여러개를 사요하면 여러개를 적으면 된다.
  std::cout << "Hello, world"<< "1" << "2" << std::endl << "3" << std::endl;
  // std:endl은 줄바꿈을 할때 사용하는 객체이다.(\n 대신에 사용하는것을 권장한다.)
}