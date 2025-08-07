#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h, cnt = 0;
    cin >> n >> h;
    while(n--) {
        int p;
        cin >> p;
        if(p >= h) cnt++;
    }
    cout << cnt << endl;
    return 0;
}