#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    vector<int> prefixW(N+1, 0);
    vector<int> suffixE(N+1, 0);

    for (int i = 0; i < N; ++i) {
        prefixW[i+1] = prefixW[i] + (S[i] == 'W' ? 1 : 0);
    }
    for (int i = N-1; i >= 0; --i) {
        suffixE[i] = suffixE[i+1] + (S[i] == 'E' ? 1 : 0);
    }

    int min_turns = N;
    for (int i = 0; i < N; ++i) {
        int turns = prefixW[i] + suffixE[i+1];
        min_turns = min(min_turns, turns);
    }

    cout << min_turns << endl;
    return 0;
}
