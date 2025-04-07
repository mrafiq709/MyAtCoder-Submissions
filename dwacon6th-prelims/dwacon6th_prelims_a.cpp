#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<pair<string, int>> vec;
  int n, t;
  string song, lastSong;
  cin >> n;
  while(n--) {
    cin >> song >> t;
    vec.push_back({song, t});
  }
  cin >> lastSong;
  
  int sum = 0;
  bool sleep = false;

  for(int i = 0; i < vec.size(); i++) {
    // cout << vec[i].first << " " <<  vec[i].second << endl;
    if(sleep) sum += vec[i].second;
    
    if (vec[i].first == lastSong) {
      sleep = true;
    }
  }
  cout << sum << endl;
}