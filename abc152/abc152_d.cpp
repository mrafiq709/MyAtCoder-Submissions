#include <bits/stdc++.h>
using namespace std;

int first_digit(int x) {
    while (x >= 10) x /= 10;
    return x;
}

int last_digit(int x) {
    return x % 10;
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> count(10, vector<int>(10, 0));

    for (int x = 1; x <= N; ++x) {
        int f = first_digit(x);
        int l = last_digit(x);
        count[f][l]++;
    }

    long long total = 0;

    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= 9; ++j) {
            total += 1LL * count[i][j] * count[j][i];
        }
    }

    cout << total << endl;
    return 0;
}
