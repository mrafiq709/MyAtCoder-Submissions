#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long int l0, l1, sum = 0;
    cin >> n;
    l0 = 2;
    l1 = 1;
    
    if(n == 1) sum = 1;
    for(int i = 2; i <= n; i++) {
        sum = l0 + l1;
        l0 = l1;
        l1 = sum;
    }
    
    cout << sum << endl;
    
    return 0;
}