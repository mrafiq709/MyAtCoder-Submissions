#include <bits/stdc++.h>
using namespace std;
long long i, a, sum = 0;
int main() {
  cin >> a;
  for(i = 1; i  <= a; i++) {
    if(i%3 == 0 || i%5 == 0) {
      //
    } else {
      sum += i;
    }
  }
  cout << sum << endl;
  return 0;
}