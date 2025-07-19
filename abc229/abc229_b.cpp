#include <bits/stdc++.h>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    while (A.length() < B.length()) A = "0" + A;
    while (B.length() < A.length()) B = "0" + B;

    bool carry = false;

    for (int i = A.length() - 1; i >= 0; i--) {
        int sum = (A[i] - '0') + (B[i] - '0');
        if (sum >= 10) {
            carry = true;
            break;
        }
    }

    cout << (carry ? "Hard" : "Easy") << endl;
    return 0;
}
