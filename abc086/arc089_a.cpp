#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int t, x, y;
  int pt = 0, px = 0, py = 0;
  while(n--) {
    cin >> t >> x >> y;
    int d = abs(px - x) + abs(py - y);
    int dt = t - pt;
    if((dt < d) || (dt - d)%2 != 0) {
      cout << "No" << endl;
      return 0;
    }
    pt = t;
    px = x;
    py = y;
  }
  cout << "Yes" << endl;
  return 0;
}