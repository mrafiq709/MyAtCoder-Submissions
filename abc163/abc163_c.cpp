/*
/ * * * \  / * * * \  / * * * \  / * * * \  / * * * \
|   R   |  |   A   |  |   F   |  |   I   |  |   Q   |
\ * * * /  \ * * * /  \ * * * /  \ * * * /  \ * * * /
*/
#include <bits/stdc++.h>
using namespace std;

int N, arr[2 * 100001];

int main() {
    int p;
    
    cin >> N;
    
    for(int i = 2; i <= N; i++) {
        cin >> p;
        arr[p]++;
    }
    
    for(int i = 1; i <= N; i++) {
        cout << arr[i] << endl;
    }
    
    return 0;
}