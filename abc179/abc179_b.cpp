#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y, n, cnt = 0;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> x >> y;
    if(x == y) {
      cnt++;
    } else {
      cnt = 0;
    }
    
    if(cnt == 3) {
      puts("Yes");
      return 0;
    }
  }
  puts("No");
  return 0;
}