/*
/ * * * \  / * * * \  / * * * \  / * * * \  / * * * \
|   R   |  |   A   |  |   F   |  |   I   |  |   Q   |
\ * * * /  \ * * * /  \ * * * /  \ * * * /  \ * * * /
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(a + b == c) {
        cout << "Yes" << endl;
        return 0;
    }
    
    if(a + c == b) {
        cout << "Yes" << endl;
        return 0;
    }
    
    if(b + c == a) {
        cout << "Yes" << endl;
        return 0;
    }
    
    cout << "No" << endl;

    return 0;
}