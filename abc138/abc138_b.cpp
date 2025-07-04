#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, v;
    cin >> n;
    double sum = 0.0;
    for(int i = 0; i < n; i++) {
        cin >> v;
        sum += (1.0/v);
    }
    
    sum = 1.0 / sum;
    cout << sum << endl;
    return 0;
}