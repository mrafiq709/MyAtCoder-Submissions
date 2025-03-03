#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector <int> v(N);
    for(int i = 0; i < N; i++) {
        cin >> v[i];
    }
    
    int btn = 0;
    int cnt = 0;
    bool ok = false;
    
    for(int i = 0; i < v.size(); i++) {
        // cout << btn + 1 << " -> " << v[btn] << endl;
        cnt++;
        if(v[btn] == 2) {
            ok = true;
            break;
        }
        
        btn = v[btn] - 1;
    }
    
    if(!ok) cout << -1 << endl;
    else cout << cnt << endl;
    
    return 0;
}