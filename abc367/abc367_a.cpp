#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, tm[24];
    
    cin >> A >> B >> C;
    
    tm[B] = 1;
    while(B != C) {
        if(B > 23) B = 0;
        else B++;
        tm[B] = 1;
    }
    tm[B] = 1;
    
    // for(int i = 0; i < 24; i++) {
    //     cout << i << " ";
    // }
    // puts("");
    // for(int i = 0; i < 24; i++) {
    //     if(i > 9)
    //         cout << " " << tm[i] << " ";
    //     else
    //         cout << tm[i] << " ";
    // }

    if(!tm[A]) puts("Yes");
    else puts("No");
    
    return 0;
}
