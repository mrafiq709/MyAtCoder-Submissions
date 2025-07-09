#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> costs = {100, 101, 102, 103, 104, 105};

    vector<bool> dp(n + 1, false);
    dp[0] = true;

    for (int i = 0; i <= n; ++i) {
        if (dp[i]) {
            for (int c : costs) {
                if (i + c <= n) {
                    dp[i + c] = true;
                }
            }
        }
    }

    if (dp[n])
        cout << "1\n";
    else
        cout << "0\n";

    return 0;
}
