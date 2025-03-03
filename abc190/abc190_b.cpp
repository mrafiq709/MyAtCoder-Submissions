#include <bits/stdc++.h>
using namespace std;

int main() {
    long N, S, D, X, Y;
    
    cin >> N >> S >> D;
    
    for(int i = 0; i < N; i++) {
        cin >> X >> Y;
        if(X < S && Y > D) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    
    cout << "No" << endl;
    return 0;
}