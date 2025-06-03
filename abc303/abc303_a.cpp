#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string a, b;
  cin >> n >> a >> b;
  // replace(str.begin(), str.end(), 'l', 'x');
  replace(a.begin(), a.end(),'0', 'o');
  replace(a.begin(), a.end(),'1', 'l');
  replace(b.begin(), b.end(),'0', 'o');
  replace(b.begin(), b.end(),'1', 'l');
  
  if(a == b) puts("Yes");
  else puts("No");
  
  return 0;
}