#include <bits/stdc++.h>
using namespace std;

struct XYC {
    string s;
    int p, index;
};

bool comparator (const XYC& a, const XYC& b) {
    return a.p > b.p;
}

int main() {
    string s;
    int n, p;
    vector<XYC> xyc;
    map<string, bool> mp;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s >> p;
        if(!mp[s]) {
            mp[s] = true;
            xyc.push_back({s, p, i});
        }
    }
    sort(xyc.begin(), xyc.end(), comparator);
    
    cout << xyc[0].index + 1 << endl;
    
    return 0;
}
