#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int ans = B % A == 0 ? A + B : B - A;
    cout << ans << endl;
    return 0;
}