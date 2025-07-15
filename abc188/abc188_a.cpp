#include <bits/stdc++.h>
using namespace std;

main() {
  int x, y;
  cin >> x >> y;
  int Mn = min(x, y);
  int Mx = max(x, y);
  if(Mn + 3 > Mx) puts("Yes");
  else puts("No");
}