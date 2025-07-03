#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p, v;
    cin >> n >> p;
    
    for (int i = 1; i <= n; i++) {
        cin >> v;
        if(i%2 == 0) --v;
        p -= v;
    }
    
    if(p >= 0) puts("Yes");
    else puts("No");
    
    return 0;
}