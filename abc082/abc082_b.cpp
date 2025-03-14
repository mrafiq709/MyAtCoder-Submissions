#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end(), greater<char>());
    
    if(s1 < s2) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}