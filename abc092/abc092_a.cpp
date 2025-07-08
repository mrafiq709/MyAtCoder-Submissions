#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int sum = 0;
    sum += a > b ? b : a;
    sum += c > d ? d : c;
    cout << sum << endl;
    
    return 0;
}