#include <bits/stdc++.h>
using namespace std;

bool solve(int n, const vector<string> &grid) {
    int dir[4][2] = { {0, 1}, {1, 0}, {1, 1}, {1, -1} };
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int d = 0; d < 4; d++) {
                int cnt_total = 0, cnt_dot = 0;
                for(int k = 0; k < 6; k++) {
                    int x = i + dir[d][0] * k;
                    int y = j + dir[d][1] * k;
                    if(x >= 0 && x < n && y >= 0 && y < n) {
                        cnt_total++;
                        if(grid[x][y] == '.') cnt_dot++;
                    } else {
                        break;
                    }
                }
                
                if(cnt_total == 6 && cnt_dot <= 2) return true;
            }
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<string> grid(n);
    for(int i = 0; i < n; i++) cin >> grid[i];
    bool ok = solve(n, grid);
    if(ok) puts("Yes");
    else puts("No");
    return 0;
}