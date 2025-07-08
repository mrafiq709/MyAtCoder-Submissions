#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    
    if(s == t) {
        puts("Yes");
        return 0;
    }
    for(int i = 0; i < s.length() - 1; i++) {
        if(s[i] != t[i]) {
            char tmp = s[i];
            s[i] = s[i+1];
            s[i+1] = tmp;
            
            if(s == t) puts("Yes");
            else puts("No");
            
            return 0;
        }
    }
    
    if(s[s.length() - 1] != t[t.length() - 1]) {
        puts("No");
    }
    
    return 0;
}