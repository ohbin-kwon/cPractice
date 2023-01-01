#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

int main() {
  string name;
  string greeting;

  cout << "이름을 입력: ";
  cin >> name;

  greeting = "안녕하세요, " + name + " 님";

  cout << greeting << endl;
  cout << name << "은 " << name.length() << "글자입니다." << endl;
  // string은 길이를 가진다.
  cout << name << "의 첫글자는 " << name[0] << "입니다." << endl;
  // string은 배열과 같이 접근자로 접근할 수 있다.
}
