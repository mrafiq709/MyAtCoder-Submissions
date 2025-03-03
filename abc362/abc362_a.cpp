#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> mp;
    int r, g, b;
    string c;
    cin >> r >> g >> b >> c;
    mp["Red"] = r;
    mp["Green"] = g;
    mp["Blue"] = b;
    
    mp[c] = 999;
    
    cout << min(min(mp["Red"], mp["Green"]), mp["Blue"]) << endl;
    
    return 0;
}