#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    multiset <ll> ms;
    int q;
    cin >> q;
    while(q--) {
        int t, k;
        ll x;
        cin >> t >> x;
        if(t == 1) {
            ms.insert(x);
        } else if(t == 2) {
            cin >> k;
            vector<ll> val;
            auto it = ms.upper_bound(x);
            while(it != ms.begin() && val.size() < k){
                --it;
                val.push_back(*it);
                // cout << *it << " ";
            }
            // puts("");
            if(val.size() < k) puts("-1");
            else cout << val[k-1] << endl;
        } else {
            cin >> k;
            auto it = ms.lower_bound(x);
            vector <ll> val;
            while(it != ms.end() && val.size() < k) {
                val.push_back(*it);
                ++it;
            }
            if(val.size() < k) puts("-1");
            else cout << val[k-1] << endl;
        }
    }
    return 0;
}