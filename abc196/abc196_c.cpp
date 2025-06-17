#include <bits/stdc++.h>
#define LL long long
using namespace std;

int main() {
  LL n, cnt = 0;
  cin >> n;
  
  for(LL i = 1; i <= n; i++) {
    string dbl = to_string(i) + to_string(i);
    if(stoll(dbl) > n) break;
    cnt++;
  }
  
  cout << cnt << endl;
  return 0;
}