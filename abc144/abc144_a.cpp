#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(a > 9 || b > 9) {
        puts("-1");
        return 0;
    }
    cout << a*b << endl;
    return 0;
}