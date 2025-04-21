#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  int cnt = 0;
  for(int i = 1; i <= 12; i++) {
    cin >> str;
    if(str.length() == i) cnt++;
  }
  
  cout << cnt << endl;
  
  return 0;
}