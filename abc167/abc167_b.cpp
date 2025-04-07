#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, C, K, sum = 0;
    cin >> A >> B >> C >> K;
    
    if(K >= A ) {
        sum += A * 1;
        K -= A;
    } else {
        sum += K * 1;
    }
    
    sum += B * 0;
    K -= B;
    
    if(K > 0) {
        sum -= K;
    }
    
    cout << sum << endl;
    
    return 0;
    
}