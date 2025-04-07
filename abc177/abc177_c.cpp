#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> arr;
    arr.resize(n);
    long long sum = 0;
    long long sumOfSq = 0;
    int mod = 1000000007;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum = (sum + arr[i]) % mod;
        sumOfSq = (sumOfSq + arr[i] * arr[i] % mod) % mod;
    }
    
    long long prod = ((sum * sum % mod) - sumOfSq + mod) % mod;
    prod = (prod * ((mod + 1) / 2)) % mod;
    
    cout << prod << endl;
    return 0;
}