#include <bits/stdc++.h>
using namespace std;

int main() {
  int arr[15][15];
  memset(arr, 0, sizeof(arr));
  int r, c;
  cin >> r >> c;
  for(int i = 0; i < 15; i++) {
    for(int j = i; j < 15 - i; j++) {
      if(i % 2 == 0) {
        arr[i][j] = 1;
        arr[j][i] = 1;
      }
    }
  }
  
  for(int i = 14; i >= 0; i--) {
    for(int j = i; j >= 14 - i; j--) {
      if(i % 2 == 0) {
        arr[i][j] = 1;
        arr[j][i] = 1;
      }
    }
  }
  
  bool black = arr[r - 1][c - 1] ? true : false;
  if(black) puts("black");
  else puts("white");
  return 0;
}