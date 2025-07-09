#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int N;
    cin >> N;

    vector<ll> q(N), a(N), b(N);
    for (int i = 0; i < N; i++) cin >> q[i];
    for (int i = 0; i < N; i++) cin >> a[i];
    for (int i = 0; i < N; i++) cin >> b[i];

    ll maxDishes = 0;

    for (ll x = 0; x <= 1e6; x++) {
        bool ok = true;
        vector<ll> remaining(N);
        for (int i = 0; i < N; i++) {
            ll neededA = a[i] * x;
            if (neededA > q[i]) {
                ok = false;
                break;
            }
            remaining[i] = q[i] - neededA;
        }

        if (!ok) break;

        ll y = LLONG_MAX;
        for (int i = 0; i < N; i++) {
            if (b[i] == 0) continue;
            y = min(y, remaining[i] / b[i]);
        }

        if (y == LLONG_MAX) y = 1e9;

        maxDishes = max(maxDishes, x + y);
    }

    cout << maxDishes << endl;
    return 0;
}
