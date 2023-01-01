// namespace로 명시하면, namspace가 여러개일때 해당 객체가 어떤 namspace로 부터 비롯되었는지 알 수 없다.
// 따라서 이를 어느정도의 code smell이라고 생각해 아래와 같이 쓰는게 좋다고 생각한다.
#include <iostream>
using std::cout;
using std::endl;

int main() {
  cout << "Hello, world" << endl;
}