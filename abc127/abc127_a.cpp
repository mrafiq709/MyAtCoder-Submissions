#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int A, B;
    
    cin >> A >> B;
    if(A <= 5) {
        cout << 0 << endl;
    } else if(A > 12) {
        cout << B << endl;
    } else {
        cout << B / 2 << endl;
    }
    
    return 0;
}