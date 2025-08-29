#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int q, x, y;
    unordered_map<int, int> mp;
    int alive = 0;

    cin >> q;
    while(q--) {
        cin >> x;
        if (x == 1) {
            cin >> y;
            if (mp[y] == 0) alive++;
            mp[y]++;
        } 
        else if (x == 2) {
            cin >> y;
            if (mp[y] > 0) {
                mp[y]--;
                if (mp[y] == 0) alive--;
            }
        } 
        else {
            cout << alive << "\n";
        }
    }
    return 0;
}
