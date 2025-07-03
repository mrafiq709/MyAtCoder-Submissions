#include <bits/stdc++.h>
using namespace std;

bool isEditDistanceWithinK(const string &s, const string &t, int k) {
    int m = s.size(), n = t.size();
    
    if (abs(m - n) > k) return false;
    
    int i = 0, j = 0, mismatches = 0;
    
    while (i < m && j < n) {
        if (s[i] == t[j]) {
            i++;
            j++;
        } else {
            mismatches++;
            if (mismatches > k) return false;
            
            if (m > n) {
                i++; // delete from s
            } else if (m < n) {
                j++; // insert into s
            } else {
                i++; // replace
                j++;
            }
        }
    }
    
    mismatches += (m - i) + (n - j);
    return mismatches <= k;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int K;
    string S, T;
    cin >> K >> S >> T;
    
    cout << (isEditDistanceWithinK(S, T, K) ? "Yes" : "No") << endl;
    
    return 0;
}