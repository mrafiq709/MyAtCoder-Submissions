#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a1(n), a2(m);
    for (int i = 0; i < n; i++) cin >> a1[i];
    for (int i = 0; i < m; i++) cin >> a2[i];

    sort(a2.begin(), a2.end());

    int Min = INT_MAX;
    for (int i = 0; i < n; i++) {
        int val = a1[i];
        auto it = lower_bound(a2.begin(), a2.end(), val);

        if (it != a2.end())
            Min = min(Min, abs(val - *it));
        if (it != a2.begin()) {
            --it;
            Min = min(Min, abs(val - *it));
        }
    }

    cout << Min << endl;
    return 0;
}
