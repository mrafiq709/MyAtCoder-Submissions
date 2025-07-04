#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, v;
    cin >> n;
    long long sum = 0;
    for(int i = 1; i <= n * 7; i++) {
        cin >> v;
        sum += v;
        if(i % 7 == 0) {
            cout << sum << " ";
            sum = 0;
        }
    }
    return 0;
}