#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    ll Mx = 0, cnt = 0;
    cin >> n;
    vector <ll> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for(int i = 0; i < n - 1; i++) {
        if(v[i] < v[i+1]) {
            cnt = 0;
        } else {
            cnt++;
        }
        Mx = max(Mx, cnt);
    }
    
    cout << Mx << endl;
    return 0;
}