#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    if(a < b || (a.length() < b.length())) puts("LESS");
    else if(a > b || (a.length() > b.length())) puts("GREATER");
    else puts("EQUAL");
    
    return 0;
}