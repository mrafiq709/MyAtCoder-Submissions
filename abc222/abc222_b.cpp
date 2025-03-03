#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, p, cnt = 0, v;
  cin >> n >> p;
  for(int i = 0; i < n; i++) {
    cin >> v;
    if(v < p) cnt++;
  }
  
  cout << cnt << endl;
  return 0;
}