#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.length();
  
  if(n%2 != 0) {
    cout << "No" << endl;
    return 0;
  }
  
  for(int i = 1; i <= n/2; i++) {
    if(s[((2*i) - 1) - 1] != s[(2*i) - 1]) {
      cout << "No" << endl;
      return 0;
    }
  }
  
  map<char, int> mp;
  for(int i = 0; i < n; i++) {
    mp[s[i]]++;
    if(mp[s[i]] > 2) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  
  return 0;
}