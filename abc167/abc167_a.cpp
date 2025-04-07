#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;
    T.erase(T.length() - 1, 1);
    if(T == S) puts("Yes");
    else puts("No");
    return 0;
    
}