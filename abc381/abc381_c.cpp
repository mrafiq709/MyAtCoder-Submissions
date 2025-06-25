#include <bits/stdc++.h>
using namespace std;

int findLongestPattern(const string& s) {
    int n = s.size();
    int maxLen = 0;

    for (int i = 1; i < n - 1; ++i) {
        if (s[i] != '/') continue;

        int left = i - 1;
        int right = i + 1;
        int len = 1;

        while (left >= 0 && s[left] == '1' && right < n && s[right] == '2') {
            len += 2;
            maxLen = max(maxLen, len);
            --left;
            ++right;
        }
    }

    return maxLen > 0 ? maxLen : 1;
}

int main() {
    int n;
    string s;
    cin >> n >> s;

    cout << findLongestPattern(s) << endl;

    return 0;
}
