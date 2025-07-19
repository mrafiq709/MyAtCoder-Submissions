#include <bits/stdc++.h>
#include <atcoder/all>
#define ll long long
using namespace std;
using namespace atcoder;

int main() {
    ll t, n, m, a, b;
    cin >> t;
    while(t--) {
        cin >> n >> m >> a >> b;
        cout << floor_sum(n,m,a,b) << endl;
    }
    return 0;
}