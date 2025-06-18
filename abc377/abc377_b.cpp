#include <bits/stdc++.h>
using namespace std;
char mat[8][8];
int color[8][8];

void makeColor() {
  for(int i = 0; i < 8; i++) {
    for(int j = 0; j < 8; j++) {
      if(mat[i][j] == '#') {
        color[i][j] = 1;
        int k = j;
        while(k < 8) {
          color[i][k] = 1;
          k++;
        }
        k = j;
        while(k >= 0) {
          color[i][k] = 1;
          k--;
        }
        
        k = i;
        while(k < 8) {
          color[k][j] = 1;
          k++;
        }
        k = i;
        while(k >= 0) {
          color[k][j] = 1;
          k--;
        }
      }
    }
  }
}

int main() {
  for(int i = 0; i < 8; i++) {
   for(int j = 0; j < 8; j++) {
     cin >> mat[i][j];
   }
  }
  
  makeColor();
  
  int cnt = 0;
  for(int i = 0; i < 8; i++) {
   for(int j = 0; j < 8; j++) {
     if(!color[i][j]) cnt++;
   }
  }
  cout << cnt << endl;
  return 0;
}