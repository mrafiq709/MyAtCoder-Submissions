#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    
    vector<vector<int>> L;
    vector<int> Seq;
    
    int li, lv;
    for(int i = 0; i < N; i++) {
        cin >> li;
        Seq = {};
        for(int j = 0; j < li; j++) {
            cin >> lv;
            Seq.push_back(lv);
        }
        L.push_back(Seq);
    }
    
    // for(int i = 0; i < L.size(); i++) {
    //     for(int j = 0; j < L[i].size(); j++) {
    //         cout << L[i][j] << " ";
    //     }
    //     puts("");
    // }
    
    int s, t;
    while(Q--) {
        cin >> s >> t;
        cout << L[s - 1][t - 1] << endl;
    }
    
    return 0;
}