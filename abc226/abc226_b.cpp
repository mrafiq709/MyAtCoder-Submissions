#include <bits/stdc++.h>
using namespace std;

void sol() {
    int n;
    cin >> n;

    vector<vector<int>> arr(n);

    for (int i = 0; i < n; ++i) {
        int q;
        cin >> q;
        arr[i].resize(q);
        for (int j = 0; j < q; ++j) {
            cin >> arr[i][j];
        }
    }

    set<vector<int>> st;

    for (const auto& row : arr) {
        st.insert(row);
    }

    cout << st.size() << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sol();
    return 0;
}
