#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b, c;
  cin >> a >> b >> c;
  if(a[a.length() - 1] == b[0] && b[b.length() - 1] == c[0]) {
    puts("YES");
  } else {
    puts("NO");
  }
  
  return 0;
}