#include <bits/stdc++.h>
using namespace std;

int main() {
    int w, a, b;
    cin >> w >> a >> b;
    if(b - (a + w) > 0) cout << b - (a + w);
    else if(a - (b + w) > 0) cout << a - (b + w);
    else cout << "0";
    return 0;
}