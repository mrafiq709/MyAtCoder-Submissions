#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a, b;
  cin >> a >> b;
  long long res = a / b;
  if(a%b == 0) {
    cout << res << endl;
  } else cout << res + 1 << endl;
  
  return 0;
}