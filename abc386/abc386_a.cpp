#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;
    int card;
    for(int i = 0; i < 4; i++) {
        cin >> card;
        s.insert(card);
    }
    
    if(s.size() == 2) puts("Yes");
    else puts("No");
    
    return 0;
}