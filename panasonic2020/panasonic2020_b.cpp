#include <bits/stdc++.h>
using namespace std;

int main() {
    long long m, n;
    cin >> m >> n;
    if(m == 1 || n == 1) cout << 1 << endl;
    else cout << (m * n + 1) / 2 << endl;

    return 0;
}
