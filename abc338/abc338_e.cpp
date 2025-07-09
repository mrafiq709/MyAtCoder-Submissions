#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<pair<int, int>> chords(N);
    unordered_set<int> used;
    for (int i = 0; i < N; ++i) {
        int a, b;
        cin >> a >> b;
        if (a > b) swap(a, b);
        chords[i] = {a, b};
        used.insert(a);
        used.insert(b);
    }

    sort(chords.begin(), chords.end());

    set<int> active_ends;

    for (auto [start, end] : chords) {
        auto it = active_ends.lower_bound(start + 1);
        if (it != active_ends.end() && *it < end) {
            cout << "Yes\n";
            return 0;
        }
        active_ends.insert(end);
    }

    cout << "No\n";
    return 0;
}
