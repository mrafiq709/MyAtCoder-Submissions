#include <bits/stdc++.h>
using namespace std;

int main() {
    int R, C;
    int arr[2][2];
    cin >> R >> C;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }
    }
    
    cout << arr[R-1][C-1] << endl;
    return 0;
}