#include <bits/stdc++.h>
using namespace std;
#define MAXN 2e5+5
vector<int> par(MAXN);
void makeset(int element) {
    par[element]=element;
}

int find_rep(int r) {
    return (par[r]==r) ? r : par[r] = find_rep(par[r]);
}

void Union(int a,int b) {
    int u,v;
    u = find_rep(a);
    v = find_rep(b);
    if(u!=v)
    {
        par[u]=v;
    }
}

int main() {
    int N, Q, t, u, v;
    cin >> N >> Q;
    for(int i = 0; i < N; i++)
        makeset(i);
        
    for(int i = 0; i < Q; i++) {
        cin >> t >> u >> v;
        if(t == 0) Union(u, v);
        else {
            if(find_rep(u) == find_rep(v)) cout << "1" << endl;
            else cout << "0" << endl;
        }
    }
    return 0;
}
