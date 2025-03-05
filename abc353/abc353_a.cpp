#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, b[101];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    for(int i = 1; i < n; i++) {
        if(b[i] > b[0]) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    
    cout << -1 << endl;
    return 0;
}