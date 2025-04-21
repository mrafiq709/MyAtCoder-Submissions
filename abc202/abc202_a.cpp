#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<pair<int, int>> v = {{1, 6}, {4, 3}, {2, 5}};
  int lp = 3, a, sum = 0;
  while(lp--) {
    cin >> a;
    for (const auto& p : v) {
      if (p.first == a) {
        // puts("p.first == a");
        // cout << "first:" << p.first << ", second:" << p.second << endl;
        sum += p.second;
        break;
      } else if (p.second == a) {
        // puts("p.second == a");
        // cout << "first:" << p.first << ", second:" << p.second << endl;
        sum += p.first;
        break;
      }
    }
  }
  cout << sum << endl;
  return 0;
}