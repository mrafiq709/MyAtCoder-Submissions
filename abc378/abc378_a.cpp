#include <bits/stdc++.h>
using namespace std;

int main() {
    int ball, arr[5], cnt = 0;
    for(int i = 1; i <= 4; i++) {
        cin >> ball;
        arr[ball]++;
    }
    for(int i = 1; i <= 5; i++) {
        if(arr[i] >= 2) cnt += arr[i] / 2;
    }
    
    cout << cnt << endl;
    return 0;
}