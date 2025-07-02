#include <bits/stdc++.h>
using namespace std;

int main() {
    string n, tmp;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i < n.length(); i++) {
        if(n[i] == '0' && n[i-1] == '0') {
            cnt += 2;
            i++;
        }
    }
    
    int ans = n.length() - (cnt / 2);
    
    cout << ans << endl;
    
    return 0;
}