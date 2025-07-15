#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

vector<int> getDivisors(int n) {
    vector<int> divisors;
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
    return divisors;
}

int main() {
    int A, B, K;
    cin >> A >> B >> K;

    int g = gcd(A, B);
    vector<int> divisors = getDivisors(g);

    sort(divisors.begin(), divisors.end(), greater<int>());

    cout << divisors[K - 1] << endl;

    return 0;
}
