#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> v;
    int n, k;
    cin >> n >> k;
    v.resize(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    if(k > n) k = n;
    
    while(k--) {
        v.erase(v.begin() + 0);
        v.insert(v.begin() + n - 1, 0);
    }
    
    for(int i = 0; i < v.size(); i++) {
        if(i == 0)
            cout << v[i];
        else
            cout << " " << v[i];
    }
    puts("");
    
    return 0;
}