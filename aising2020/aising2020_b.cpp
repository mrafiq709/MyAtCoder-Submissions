/*
/ * * * \  / * * * \  / * * * \  / * * * \  / * * * \
|   R   |  |   A   |  |   F   |  |   I   |  |   Q   |
\ * * * /  \ * * * /  \ * * * /  \ * * * /  \ * * * /
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, v, cnt = 0;

    cin >> n;
    for(int i = 1; i<=n; i++) {
        cin >> v;
        if((v % 2 == 1) && (i % 2 == 1)) cnt++;
    }
    cout << cnt;
    return 0;
}
