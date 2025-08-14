#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    for(int i = 1; i <= n ; i++) {
        for(int j = i+1; j <= n; j++) {
            if(i%2 != j%2) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}