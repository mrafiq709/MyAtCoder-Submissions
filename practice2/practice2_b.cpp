#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MAXN = 5e5 + 5;
ll bit[MAXN];
int n, m;

// Adds 'val' to index 'i'
void update(ll i, ll val) {
    while (i <= n) {
        bit[i] += val;
        i += (i & -i);
    }
}

// Returns sum from 1 to i
ll query(ll i) {
    ll sum = 0;
    while (i > 0) {
        sum += bit[i];
        i -= (i & -i);
    }
    return sum;
}

// Returns sum from l to r (inclusive)
ll range_query(ll l, ll r) {
    return query(r) - query(l - 1);
}

int main() {
    cin >> n >> m;
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; ++i) {
        cin >> a[i];
        update(i, a[i]);
    }
    ll qType, l, r;
    for(ll i = 0; i < m; i++) {
      cin >> qType >> l >> r;
      if(qType == 1) {
        cout << range_query(l+1, r) << endl;
      } else {
        update(l+1, r);
      }
    }

    return 0;
}
