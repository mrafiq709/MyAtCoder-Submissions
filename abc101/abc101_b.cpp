#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, sum = 0;
    cin >> N;
    
    int tmp = N;
    
    while(N > 0) {
        int dg = N % 10;
        N /= 10;
        sum += dg;
    }
    
    if(tmp % sum == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}