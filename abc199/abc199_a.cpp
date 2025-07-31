#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if((a*a + b*b) < c*c) puts("Yes");
    else puts("No");
    return 0;
}