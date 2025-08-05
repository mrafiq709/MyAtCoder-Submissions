#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<ll> A;
    vector<ll> B;
    for(int i = 0; i < n - 1; i++) {
        ll num;
        cin >> num; 
        B.push_back(num);
    }
    
    A.push_back(B[0]);
    for(int i = 0; i < n - 2; i++) {
        A.push_back(min(B[i], B[i+1]));
    }

    A.push_back(B.back());
    ll ans = 0;
    for(int i = 0; i < A.size(); i++) {
        ans += A[i];
    }
    cout << ans << endl;
    return 0;
}