// 의미있는 상수 생성
const int MAINMENU = 0;
const int PLAYING = 1;
const int PAUSED = 2;
const int GAMEOVER = 3;

int main() {
  int currState = MAINMENU;

  while (true) {
    switch (currState) {
      case MAINMENU:
        // 메인메뉴
        break;
      case PLAYING:
        // 플레이중
        break;
      case PAUSED:
        // 일시정지
        break;
      case GAMEOVER:
        // 게임 오버
        break;
    }
  }
};
// 위와 같이 한 대상이 가질 수 있는 다양한 가능한 값들을 0, 1, 2 등의 상수로 나타낸 것을 enumeration(열거형)이라고 한다.
// c언어에서는 enum키워드를 이용해 표현할 수 있다.