#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    int n, s, g;
    cin >> n >> s;
    for(int i = 0; i < n; i++) {
        cin >> g;
        q.push(g);
    }
    
    int group = 0;
    int cnt = 0;
    while(!q.empty()) {
        int front = q.front();
        group += front;
        q.pop();
        if(group + q.front() > s) {
            // cout << group << endl;
            group = 0;
            cnt++;
        } else if(q.empty()) {
            // cout << group << endl;
            cnt++;
        }
    }
    
    cout << cnt << endl;
    
    return 0;
}