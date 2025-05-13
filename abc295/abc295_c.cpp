#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a[5 * 100001], cnt = 0;
    cin >> n;
    int i = 0;
    for(int j = 0; j < n; j++) {
        cin >> a[j];
    }
    sort(a, a + n);
    while(i < n && n > 1) {
        if(a[i] == a[i+1]) {
            i += 2;
            cnt++;
        } else {
            i++;
        }
    }
    
    cout << cnt << endl;
}