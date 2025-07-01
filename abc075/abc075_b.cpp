#include <bits/stdc++.h>
using namespace std;

int mat[50][50];
string grid[50];
int X[8] ={-1,-1,0,1,1,1,0,-1};
int Y[8] ={0,1,1,1,0,-1,-1,-1};

int main() {
    int h, w;
    cin >> h >> w;
    
    char ch;
    memset(mat, 0, sizeof(mat));
    
    for (int i = 0; i < h; i++) {
        cin >> grid[i];
    }
    
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if(grid[i][j] == '#') {
                for(int k = 0; k < 8; k++) {
                    int ux = i + X[k];
                    int uy = j + Y[k];
                    if(ux >= 0 && ux < h && uy >= 0 && uy < w && grid[ux][uy] == '.') {
                        mat[ux][uy]++;
                    }
                }
            }
        }
    }
    
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if(grid[i][j] == '#')
                cout << "#";
            else
                cout << mat[i][j];
        }
        cout << endl;
    }
    return 0;
}