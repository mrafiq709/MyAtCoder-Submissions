#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int cnt = 0;
    for(int i = -100; i <= 1000; i++) {
        // q - p = r - q
        if(a - b == i - a) {
            cnt++;
        } else if(a - i == b - a) {
            cnt++;
        } else if(b - a == i - b) {
            cnt++;
        } else if(b - i == a - b) {
            cnt++;
        } else if(i - a == b - i) {
            cnt++;
        } else if(i - b == a - i) {
            cnt++;
        }
    }
    
    cout << cnt << endl;
    return 0;
}