#include <bits/stdc++.h>
using namespace std;

main() {
  int n, x;
  vector<int> v(n);
  cin >> n >> x;
  for(int i = 0; i < n; i++) {
    int inp;
    cin >> inp;
    if(inp == x) continue;
    v.push_back(inp);
  }
  for(int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
}