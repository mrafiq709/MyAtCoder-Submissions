#include <bits/stdc++.h>
using namespace std;

 int main() {
     long long N;
     cin >> N;
     N =  N % 998244353;
     N < 0 ? cout << N + 998244353 << endl : cout << N << endl;
     return 0;
 }