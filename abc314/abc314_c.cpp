#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    int n, m;
    cin >> n >> m;
    vector<int> s[n+1];
    cin >> str;
    int color;
    for(int i = 1; i <= n; i++) {
        cin >> color;
        s[color].push_back(i - 1);
    }
    
    for(auto it : s) {
        if(it.size() == 0) continue;
        // cout << it.back() + 1 << endl;
        char ch = str[it.back()];
        
        // for(int i = 0; i < it.size(); i++) {
        //     cout << " -> " << it[i] + 1;
        // }
        // puts("");
        for(int i = it.size() - 1; i > 0; i--) {
            // cout << i + 1 << " -> " << it[i] + 1 << endl;
            str[it[i]] = str[it[i - 1]];
        }
        str[it[0]] = ch;
    }
    cout << str << endl;
    
    return 0;
}