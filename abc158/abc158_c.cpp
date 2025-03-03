#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int left = 0;
    int right = 1e5+1;
    int ans = -1;
    
    while(right - left > 1) {
        int mid = (right + left) / 2;
        // cout << mid << endl;
        int priceA = mid * 0.08;
        int priceB = mid * 0.10;
        
        // cout << priceA << " " << priceB << endl;
        
        if(priceA < a || priceB < b) {
            left = mid;
        } else {
            right = mid;
        }
        
        if(priceA == a && priceB == b) {
            ans = mid;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}