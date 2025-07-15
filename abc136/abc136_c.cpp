#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, H[100005], Mx, Mx2;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> H[i];
    }
    Mx = H[0];
    for(int i = 1; i < N; i++) {
        // cout << H[i-1] << " " << H[i] << endl;
        if(H[i-1] > H[i]) {
            H[i-1]--;
            Mx2 = H[i-1];
        }
        
        if(Mx2 > Mx) Mx = Mx2;
        
        if(Mx > H[i]) {
           cout << "No" << endl;
           return 0;
        }
    }
    
    // cout << Mx << endl;
    
    puts("Yes");
    return 0;
}