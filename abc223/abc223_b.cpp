#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    string str;
    cin >> str;
    string mn = str;
    string mx = str;
    int len = str.length();

    for(int i = 0; i < len; i++) {
        string nwPre(1, str[len - 1]);
        str.erase(str.begin() + len - 1);
        nwPre.append(str);
        str = nwPre;
        if(mn > nwPre) mn = nwPre;
        if(mx < nwPre) mx = nwPre;
    }
    
    cout << mn << endl;
    cout << mx << endl;
    return 0;
}