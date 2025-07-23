#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    map<ll, int> mp;
    for(int i = 0; i < n; i++) {
        int noddle;
        cin >> noddle;
        mp[noddle]++;
    }
    
    while(m--) {
        int eat;
        cin >> eat;
        if(mp[eat] <= 0) {
            puts("No");
            return 0;
        } else {
            mp[eat]--;
        }
    }
    puts("Yes");
    return 0;
}