#include <bits/stdc++.h>
using namespace std;

int main() {
  float a;
  cin >> a;
  int cnt = 0;
  for(int i = 1; i <= a; i++) {
    if(i%2 == 1) cnt++;
  }
  // cout << cnt << "/" << a << endl;
  float prob = cnt / a;
  // cout << fixed << setprecision(10) << prob << endl;
  cout << prob << endl;
  return 0;
}