#include <stdio.h>

#define FOR(I,S,E) for(int I = S; I <= E; I++)
// 간단한 for문 매크로

int main() {
  FOR(i, 1, 10) {
    printf("%d\n", i);
  }
}