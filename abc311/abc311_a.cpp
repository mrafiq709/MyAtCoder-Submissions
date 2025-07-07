#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    char ch;
    set<char> s;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> ch;
        s.insert(ch);
        if(s.size() >= 3) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    return 0;
}