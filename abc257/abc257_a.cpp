#include <bits/stdc++.h>
using namespace std;

int main() {
  string letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  string str = "";
  int n, p;
  cin >> n >> p;
  for(int i = 0; i < 26; i++) {
    int tm = n;
    string tmStr = "";
    while(tm--) {
      tmStr += string(1, letters[i]);
    }
    
    str += tmStr;
  }
  
  cout << str[p - 1] << endl;
  return 0;
}