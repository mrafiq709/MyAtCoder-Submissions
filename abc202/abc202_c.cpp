#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> A(n), B(n), C(n);

    for (int i = 0; i < n; ++i) cin >> A[i];
    for (int i = 0; i < n; ++i) cin >> B[i];
    for (int i = 0; i < n; ++i) cin >> C[i];

    unordered_map<int, int> freq;

    for (int j = 0; j < n; ++j) {
        int b_val = B[C[j] - 1];
        freq[b_val]++;
    }

    long long count = 0;
    for (int i = 0; i < n; ++i) {
        count += freq[A[i]];
    }

    cout << count << endl;

    return 0;
}
