#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> sets(M);
    
    for(int i = 0; i < M; i++) {
        int Ci;
        cin >> Ci;
        sets[i].resize(Ci);
        for(int j = 0; j < Ci; j++) {
            cin >> sets[i][j];
        }
    }
    
    int cnt = 0;
    
    for(int i = 1; i < (1 << M); i++) {
        vector<bool> covered(N + 1, false);
        for(int j = 0; j < M; j++) {
            if(i & (1 << j)) {
                for(int num : sets[j]) {
                   covered[num] = true;
                }
            }
        }
        bool isValid = true;
        for(int k = 1; k <= N; k++) {
            if(!covered[k]) {
                isValid = false;
                break;
            }
        }
        
        if(isValid) cnt++;
    }
    
    cout << cnt << endl;
    return 0;
}