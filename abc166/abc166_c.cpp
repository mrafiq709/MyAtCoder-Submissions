#include <bits/stdc++.h>
using namespace std;
long h[100005], cnt = 0;
vector<long> adj[100005];

void bfs(long st) {
    long good = 0;
    bool single = true;
    for(long adjNode : adj[st]) {
        single = false;
	   // cout << " | " << st << "(" << h[st] << ")--->" << adjNode << "(" << h[adjNode] << ")";
		if(h[st] > h[adjNode]) {
		    good++;
		  //  cout << " | Good: " << st << "--->" << adjNode;
		}
    }
    // if(single) cout << "single: " << st << endl;
    // puts("");
    if(good == adj[st].size() || single) cnt++;
}

int main() {
    long n, m, a, b;
    
    cin >> n >> m;
    for(long i = 1; i <= n; i++) {
        cin >> h[i];
    }
    
    for(long i = 0; i < m; i++) {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    for(long i = 1; i <= n; i++)
        bfs(i);
        
    cout << cnt << endl;
    
    return 0;
}