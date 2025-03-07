#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> st;
    for(int i = 0; i < s.length(); i++) {
        if(st.empty()) {
            st.push(s[i]);
        } else {
            if((st.top() == '1' && s[i] == '0') || (st.top() == '0' && s[i] == '1')) {
                st.pop();
            } else {
                st.push(s[i]);
            }
        }
    }
    cout << s.size() - st.size() << endl;
    return 0;
}