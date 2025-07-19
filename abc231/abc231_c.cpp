#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, q;
    cin >> n >> q;
    vector<ll> Ai(n);
    for (ll i = 0; i < n; i++) {
        cin >> Ai[i];
    }

    sort(Ai.begin(), Ai.end());

    while (q--) {
        ll t;
        cin >> t;
        // Use lower_bound to find first index where Ai[i] >= t
        auto it = lower_bound(Ai.begin(), Ai.end(), t);
        ll cnt = Ai.end() - it;
        cout << cnt << '\n';
    }

    return 0;
}
