/*
/ * * * \  / * * * \  / * * * \  / * * * \  / * * * \
|   R   |  |   A   |  |   F   |  |   I   |  |   Q   |
\ * * * /  \ * * * /  \ * * * /  \ * * * /  \ * * * /
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X, Y, N, taka = 0;
    
    cin >> X >> Y >> N;
    
    if(X * 3 < Y) {
        taka = X * N;
    } else {
        int divi = (N / 3);
        taka = divi * Y;
        int left = N - divi * 3;
        
        taka += left * X;
    }
    
    cout << taka << endl;
    
    return 0;
    
}