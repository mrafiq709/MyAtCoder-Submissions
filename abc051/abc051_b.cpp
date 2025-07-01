#include <bits/stdc++.h>
using namespace std;

int main() {
    int K, S;
    cin >> K >> S;
    int count = 0;

    for (int A = 0; A <= K; ++A) {
        for (int B = 0; B <= K; ++B) {
            int C = S - A - B;
            if (0 <= C && C <= K) {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}
