#include <bits/stdc++.h>
using namespace std;

main() {
  string s;
  cin >> s;
  if(s.length() < 4) {
    for(int i = 0; i < 4 - s.length(); i++) cout << "0";
  }
  cout << s << endl;
}