#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int s = (a + b + c) / 2;
  int res = sqrt(s*(s-a)*(s-b)*(s-c));
  cout << res << endl;
  return 0;
}