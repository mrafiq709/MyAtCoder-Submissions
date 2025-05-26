#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    int n;
    cin >> n;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '"') cnt++;
        if(cnt == 2) {
            cnt = 0;
        }
        
        if(cnt == 0 && s[i] == ',') {
            cout << ".";
        } else {
            cout << s[i];
        }
    }
    return 0;
}