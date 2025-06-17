#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  
  int cnt = 0, Mx = -1;
  
  if(s.find("-") == string::npos) {
    cout << -1 << endl;
    return 0;
  }
  
  for(int i = 0; i < n; i++) {
    if(s[i] == '-') {
      cnt = 0;
    } else {
      cnt++;
      if(Mx < cnt) Mx = cnt;
    }
  }
  cout << Mx << endl;
  return 0;
}