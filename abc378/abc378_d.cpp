#include <bits/stdc++.h>
using namespace std;

vector<string> grid;
int cnt = 0;
int dir[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
int h, w, k;

void dfs(int x, int y, int mv, set<pair<int, int>>& s) {
    if(mv == 0) {
        cnt++;
        return;
    }
    
    for(int i = 0; i< 4; i++) {
        int vx = x + dir[i][0];
        int vy = y + dir[i][1];
        
        if(vx >= 0 && vx < h && vy >= 0 && vy < w && grid[vx][vy] == '.' && s.find({vx, vy}) == s.end()) {
            s.insert({vx, vy});
            dfs(vx, vy, mv - 1, s);
            s.erase({vx, vy});
        }
    }
}

int main() {
    cin >> h >> w >> k;
    grid.resize(h);
    for(int i = 0; i < h; i++) {
        cin >> grid[i];
    }
    
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(grid[i][j] == '.') {
                set<pair<int, int>> s;
                s.insert({i, j});
                dfs(i, j, k, s);
            }
        }
    }
    
    cout << cnt << endl;
    
    return 0;
}