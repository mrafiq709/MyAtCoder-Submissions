#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int res = n*1.08;
  if(res < 206) puts("Yay!");
  else if(res == 206) puts("so-so");
  else puts(":(");
  return 0;
}