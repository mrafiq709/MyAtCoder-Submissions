#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e15;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<vector<long long>> dist(N, vector<long long>(N, INF));
    for (int i = 0; i < N; ++i) dist[i][i] = 0;

    for (int i = 0; i < M; ++i) {
        int u,v; long long w;
        cin >> u >> v >> w;
        --u; --v;
        dist[u][v] = min(dist[u][v], w);
    }

    for (int k = 0; k < N; ++k)
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j)
                if (dist[i][k] != INF && dist[k][j] != INF)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

    int full = 1 << N;
    vector<vector<long long>> dp(full, vector<long long>(N, INF));

    for (int i = 0; i < N; ++i) {
        dp[1 << i][i] = 0;
    }

    for (int mask = 0; mask < full; ++mask) {
        for (int u = 0; u < N; ++u) {
            if (dp[mask][u] == INF) continue;
            for (int v = 0; v < N; ++v) {
                if ((mask & (1 << v)) == 0 && dist[u][v] != INF) {
                    int next_mask = mask | (1 << v);
                    dp[next_mask][v] = min(dp[next_mask][v], dp[mask][u] + dist[u][v]);
                }
            }
        }
    }

    long long answer = *min_element(dp[full-1].begin(), dp[full-1].end());

    if (answer == INF) {
        cout << "No\n";
    } else {
        cout << answer << '\n';
    }

    return 0;
}
