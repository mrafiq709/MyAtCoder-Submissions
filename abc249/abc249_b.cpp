#include <bits/stdc++.h>
using namespace std;

bool isValid(const string& str) {
    bool hasLower = false, hasUpper = false;
    unordered_set<char> seen;

    for (char c : str) {
        if (seen.count(c)) return false;
        seen.insert(c);

        if (islower(c)) hasLower = true;
        if (isupper(c)) hasUpper = true;
    }

    return hasLower && hasUpper;
}

int main() {
    string str;
    cin >> str;

    if (isValid(str)) puts("Yes");
    else puts("No");

    return 0;
}
