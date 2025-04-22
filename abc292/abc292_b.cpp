/*
/ * * * \  / * * * \  / * * * \  / * * * \  / * * * \
|   R   |  |   A   |  |   F   |  |   I   |  |   Q   |
\ * * * /  \ * * * /  \ * * * /  \ * * * /  \ * * * /
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int pl[101][4], n, q, card, x;

    memset(pl, 0, sizeof(pl));
    cin >> n >> q;

    for(int i = 1; i <= q; i++) {

        cin >> card >> x;
        if(card == 1 || card == 2)
            pl[x][card]++;

        if(card == 3) {
            if(pl[x][1] >= 2 || pl[x][2] >= 1) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}
