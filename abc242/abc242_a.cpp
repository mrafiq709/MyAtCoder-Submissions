#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b, c, x;
  double ans = 1;
  cin >> a >> b >> c >> x;
  if(x <= a) {
    cout << fixed << setprecision(12) << ans << endl;
    return 0;
  } else if(x > b) {
    cout << fixed << setprecision(12) << 0.0 << endl;
    return 0;
  }
  
  ans = c / (b - a);
  cout << fixed << setprecision(12) << ans << endl;
  return 0;
}