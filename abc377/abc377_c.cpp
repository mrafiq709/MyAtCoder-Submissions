#include <bits/stdc++.h>
using namespace std;

struct pair_hash {
  inline size_t operator()(const pair<int, int> & v) const {
    return v.first * 100000LL + v.second;
  }
};

int main() {
  int n, m;
  cin >> n >> m;
  unordered_set<pair<int, int>, pair_hash> occupied;
  vector<pair<int, int>> moves = {
    {2, 1}, {1, 2}, {-1, 2}, {-2, 1},
    {-2, -1}, {-1, -2}, {1, -2}, {2, -1}
  };
  
  for (int i = 0; i < m; ++i) {
    int x, y;
    cin >> x >> y;
    --x; --y;
    occupied.insert({x, y});

    for (auto move : moves) {
      int nx = x + move.first;
      int ny = y + move.second;
      if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
        occupied.insert({nx, ny});
      }
    }
  }

  long long total_cells = 1LL * n * n;
  long long free_cells = total_cells - occupied.size();
  cout << free_cells << endl;
  
  return 0;
}