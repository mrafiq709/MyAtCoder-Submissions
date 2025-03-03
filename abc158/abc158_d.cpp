#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int q;
    cin >> s >> q;

    deque<char> dq(s.begin(), s.end());
    bool reversed = false;

    while (q--) {
        int ti;
        cin >> ti;
        if (ti == 1) {
            reversed = !reversed;
        } else {
            int fi;
            char ci;
            cin >> fi >> ci;

            if ((fi == 1 && !reversed) || (fi == 2 && reversed)) {
                dq.push_front(ci);
            } else {
                dq.push_back(ci);
            }
        }
    }

    if (reversed) {
        reverse(dq.begin(), dq.end());
    }

    for (char c : dq) cout << c;
    cout << endl;

    return 0;
}
