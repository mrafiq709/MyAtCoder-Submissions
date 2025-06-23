#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, n;
  cin >> h >> n;
  for(int i = 0; i < n; i++) {
    int v;
    cin >> v;
    h -= v;
  }
  
  if(h > 0) puts("No");
  else puts("Yes");
  
  return 0;
}