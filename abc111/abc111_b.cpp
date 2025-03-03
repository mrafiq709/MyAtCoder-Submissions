#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    char dg;

    if(s[0] - 48 > s[1] - 48) {
        dg = s[0];
    } else if(s[0] - 48 < s[1] - 48) {
        dg = to_string(s[0] - 48 + 1)[0];
    } else if(s[1] - 48 > s[2] - 48) {
        dg = s[1];
    } else if(s[0] - 48 == s[1] - 48 && s[1] - 48 == s[2] - 48) {
        dg = s[0];
    } else {
        dg = to_string(s[1] - 48 + 1)[0];
    }
    
    cout << dg << dg << dg << endl;

    return 0;
}