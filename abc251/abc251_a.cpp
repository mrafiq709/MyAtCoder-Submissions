#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, tmp;
  cin >> a;
  tmp = a;
  for(int i = 0; i < 6; i++) {
    while(a.length() + tmp.length() <= 6) {
      a += tmp;
    }
  }
  cout << a << endl;
  return 0;
}