#include <bits/stdc++.h>
using namespace std;

main() {
  string str;
  cin >> str;
  int sum = 700;
  for(int i = 0; i < str.length(); i++) {
    if(str[i] == 'o') sum += 100;
  }
  cout << sum << endl;
}