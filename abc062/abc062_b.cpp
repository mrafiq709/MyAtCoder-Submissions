#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    char mat[101][101];
    cin >> h >> w;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cin >> mat[i][j];
        }
    }
    
    for(int i = 0; i < w + 2; i++){ 
        cout << "#";
    }
    puts("");
    for(int i = 0; i < h; i++) {
        cout << "#";
        for(int j = 0; j < w; j++) {
            cout << mat[i][j];
        }
        cout << "#";
        cout << endl;
    }
    for(int i = 0; i < w + 2; i++) {
        cout << "#";
    }
    puts("");
    return 0;
}