#include <bits/stdc++.h>
using namespace std;

bool isValidFormat(const string& S) {
    if (S.length() != 8) return false;

    if (!isupper(S.front()) || !isupper(S.back())) return false;

    for (int i = 1; i <= 6; ++i) {
        if (!isdigit(S[i])) return false;
    }

    int number = stoi(S.substr(1, 6));
    if (number < 100000 || number > 999999) return false;

    return true;
}

int main() {
    string S;
    cin >> S;

    if (isValidFormat(S)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
