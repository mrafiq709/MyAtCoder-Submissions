#include <bits/stdc++.h>
using namespace std;

main() {
  int n;
  cin >> n;
  vector<pair<int, int>> v(n);
  for(int i = 0; i < n; i++) {
    int k;
    cin >> k;
    v[i] = {k, i + 1};
  }
  sort(v.begin(), v.end());
  
  for(auto p : v) {
    cout << p.second << " ";
  }
}