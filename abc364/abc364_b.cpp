#include <bits/stdc++.h>
using namespace std;

char mat[51][51];
int h, w;

void dfs_visit(int si, int sj, string path) {
    // cout << si << " " << sj << " " << path << endl;
    if(path == "") {
        cout << si << " " << sj << endl;
        return;
    }

    if(mat[si][sj] == '.' && si >= 1 && si <= h && sj >= 1 && sj <= w)
    {
        if(path[0] == 'L' && mat[si][sj - 1] == '.') {
            sj--;
        } else if(path[0] == 'R' && mat[si][sj + 1] == '.') {
            sj++;
        } else if(path[0] == 'U' && mat[si - 1][sj] == '.') {
            si--;
        } else if(path[0] == 'D' && mat[si + 1][sj] == '.') {
            si++;
        }
        path.erase(path.begin());
        dfs_visit(si, sj, path);
    }
}

int main() {
    int si, sj;
    string path;

    cin >> h >> w >> si >> sj;
    for(int i = 1; i <= h; i++) {
        for(int j = 1; j <= w; j++) {
            cin >> mat[i][j];
        }
    }
    cin >> path;
    dfs_visit(si, sj, path);
    return 0;
}
