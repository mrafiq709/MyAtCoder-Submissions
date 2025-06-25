#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int ln = s.length();
  
  if(ln%2 == 0) {
    cout << "No" << endl;
    return 0;
  }
  
  for(int i = 0; i < ((n+1)/2) - 1; i++) {
    // cout << s[i];
    if(s[i] != '1') {
      cout << "No" << endl;
      return 0;
    }
  }
  // puts("");
  int slash =  ((n+1)/2) - 1;
  if(s[slash] != '/') {
    cout << "No" << endl;
    return 0;
  }
  // cout << s[slash];
  // puts("");

  if(slash + 1 < n) {
    for(int i = slash + 1; i < n; i++) {
      // cout << s[i];
      if(s[i] != '2') {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  // puts("");
  cout << "Yes" << endl;
  
  return 0;
}