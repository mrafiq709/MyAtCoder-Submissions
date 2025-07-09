#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    
    sort(str.begin(), str.end());
    
    vector<int> v;
    v.resize(123);
    
    for(int i = 0; i < str.length(); i++) {
        v[str[i]]++;
    }
    
    int Mx = -1;
    char ch = ' ';
    for(int i = 97; i < 123; i++) {
        if(v[i] && Mx < v[i]) {
            Mx = v[i];
            ch = (char) i;
        }
    }
    cout << ch << endl;
    return 0;
}