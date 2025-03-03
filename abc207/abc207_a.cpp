#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int Min = min(min(a, b), c);
    cout << a + b + c - Min << endl;
    return 0;
}