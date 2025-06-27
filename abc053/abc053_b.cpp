#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int Mx = 0;
  int cnt = 0;
  bool found = false;
  for(int i = 0; i < s.length(); i++) {
    
    if(s[i] == 'A') {
      found = true;
    }
    
    if(found) {
      cnt++;
    }
    
    if(s[i] == 'Z') {
      if(Mx < cnt) Mx = cnt;
    }
  }
  
  cout << Mx << endl;
  return 0;
}