#include <bits/stdc++.h>
using namespace std;

int main() {
    char mat[501][501];
    int h, w, Min = 9999, Max = 0;
    cin >> h >> w;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cin >> mat[i][j];
            if(mat[i][j] == '#') {
                if(Min > j) Min = j;
                if(Max < j) Max = j;
            }
        }
    }
    
    // cout << Min + 1 << " " << Max + 1 << endl;
    
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(mat[i][j] == '.' && j >= Min && j <= Max 
            && (mat[i][j - 1] == '#' || mat[i][j + 1] == '#')
            ) {
                cout << i + 1 << " " << j + 1 << endl;
                return 0;
            }
        }
    }
    
    return 0;
}