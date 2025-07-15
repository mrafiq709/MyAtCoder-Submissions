#include <bits/stdc++.h>
using namespace std;
#define ll long long

main() {
  ll n, m;
  cin >> n >> m;
  vector<pair<ll, ll>> canPrices(n);
  for(ll i = 0; i < n; i++) {
    ll price, cans;
    cin >> price >> cans;
    canPrices[i] = {price, cans};
  }
  
  sort(canPrices.begin(), canPrices.end());

  long long yen = 0;
  for(auto &[x, y] : canPrices) {
    if(m <= y) {
      yen += m * x;
      break;
    } else {
      yen += x * y;
      m -= y;
    }
  }
  
  cout << yen << endl;
}