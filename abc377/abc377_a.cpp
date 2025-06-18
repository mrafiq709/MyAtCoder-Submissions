#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<char> abc;

  for(int i = 0; i < 3; i++) {
    char c;
    cin >> c;
    abc.push_back(c);
  }
  sort(abc.begin(), abc.end());
  
  if(abc[0] == 'A' && abc[1] == 'B' && abc[2] == 'C') puts("Yes");
  else puts("No");
  
  return 0;
}