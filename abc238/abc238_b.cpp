#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> angles(n);

    for (int i = 0; i < n; ++i) {
        cin >> angles[i];
    }

    vector<int> cuts;
    cuts.push_back(0);
    int current = 0;

    for (int i = 0; i < n; ++i) {
        current = (current + angles[i]) % 360;
        cuts.push_back(current);
    }

    sort(cuts.begin(), cuts.end());

    int max_angle = 0;
    for (int i = 1; i < cuts.size(); ++i) {
        max_angle = max(max_angle, cuts[i] - cuts[i - 1]);
    }

    max_angle = max(max_angle, 360 - cuts.back());

    cout << max_angle << endl;

    return 0;
}
