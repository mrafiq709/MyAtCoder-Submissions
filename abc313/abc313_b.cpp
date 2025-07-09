#include <bits/stdc++.h>
using namespace std;

int noScyko[55];
vector<int> scyko;

int main() {
    int n, p;
    cin >> n >> p;
    memset(noScyko, 0, sizeof(noScyko));
    
    for(int i = 0; i < p; i++) {
        int px, py;
        cin >> px >> py;
        noScyko[py]--;
    }
    
    for(int i = 1; i <= n; i++) {
        if(!noScyko[i]) {
            scyko.push_back(i);
        }
    }
   
    if(scyko.size() == 1) cout << scyko[0] << endl;
    else cout << "-1" << endl;

    return 0;
}