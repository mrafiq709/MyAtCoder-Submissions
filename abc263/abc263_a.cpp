#include <bits/stdc++.h>
using namespace std;

int main() {
  map<int, int> mp;
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  mp[a]++;
  mp[b]++;
  mp[c]++;
  mp[d]++;
  mp[e]++;
  
  bool ok = true;
  if(mp.size() == 2) {
      map<int, int>::iterator it = mp.begin();
      while (it != mp.end()) {
        if(it->second < 2) {
            ok = false;
            break;
        }
        ++it;
      }
      if(ok) {
          puts("Yes");
          return 0;
      }
  }

  puts("No");
  return 0;
}