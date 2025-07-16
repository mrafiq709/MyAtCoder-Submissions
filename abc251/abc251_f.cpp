#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<vector<int>> G;
vector<bool> visited;
vector<pair<int,int>> T1_edges, T2_edges;

void dfs(int u) {
    visited[u] = true;
    for (int v : G[u]) {
        if (!visited[v]) {
            T1_edges.emplace_back(u, v);
            dfs(v);
        }
    }
}

void bfs(int root) {
    vector<bool> vis(N+1, false);
    queue<int> q;
    q.push(root);
    vis[root] = true;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : G[u]) {
            if (!vis[v]) {
                vis[v] = true;
                T2_edges.emplace_back(u, v);
                q.push(v);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    G.assign(N+1, vector<int>());
    for (int i = 0; i < M; i++) {
        int u,v; cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    visited.assign(N+1, false);
    dfs(1);

    bfs(1);

    for (auto &e : T1_edges)
        cout << e.first << " " << e.second << "\n";

    for (auto &e : T2_edges)
        cout << e.first << " " << e.second << "\n";

    return 0;
}
