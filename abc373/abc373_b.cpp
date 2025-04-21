#include <bits/stdc++.h>
using namespace std;

int main() {
  unordered_map<char, int> mp;
  string s1;
  cin >> s1;
  for(int i = 0; i < s1.length(); i++) {
    mp[s1[i]] = i + 1;
  }
  
  int move = 0;
  string s2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  for(int j = 0; j < s2.length() - 1; j++) {
    // cout << key << ":" << val << " ";
    move += abs(mp[s2[j]] - mp[s2[j+1]]);
  }
  
  cout << move << endl;
  return 0;
}