#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    vector<int> X(M);
    for (int i = 0; i < M; ++i) {
        cin >> X[i];
        --X[i];
    }

    vector<ll> diff(N + 1, 0);
    ll total_cost = 0;

    for (int i = 0; i < M - 1; ++i) {
        int u = X[i];
        int v = X[i + 1];

        if (u == v) continue;

        int cw = (v - u + N) % N;
        int ccw = (u - v + N) % N;

        if (cw <= ccw) {
            total_cost += cw;
            int start = u;
            int end = (u + cw) % N;
            if (start < end) {
                diff[start] += (N - 2 * cw);
                diff[end] -= (N - 2 * cw);
            } else {
                diff[start] += (N - 2 * cw);
                diff[N] -= (N - 2 * cw);
                diff[0] += (N - 2 * cw);
                diff[end] -= (N - 2 * cw);
            }
        } else {
            total_cost += ccw;
            int start = v;
            int end = (v + ccw) % N;
            if (start < end) {
                diff[start] += (N - 2 * ccw);
                diff[end] -= (N - 2 * ccw);
            } else {
                diff[start] += (N - 2 * ccw);
                diff[N] -= (N - 2 * ccw);
                diff[0] += (N - 2 * ccw);
                diff[end] -= (N - 2 * ccw);
            }
        }
    }

    vector<ll> penalty(N, 0);
    ll cur = 0;
    for (int i = 0; i < N; ++i) {
        cur += diff[i];
        penalty[i] = cur;
    }

    ll result = total_cost + *min_element(penalty.begin(), penalty.end());
    cout << result << '\n';

    return 0;
}
