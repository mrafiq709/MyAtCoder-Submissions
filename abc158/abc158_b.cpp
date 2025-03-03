#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, A, B, ball = 0;
    cin >> N >> A >> B;
    
    long long div = N / (A + B);
    long long tA = div * A;
    long long tB = div * B;
    
    N -= tA;
    ball += tA;
    N -= tB;

    
    if(A > 0 && N > 0) {
        ball += min(A, N);
    }
    
    cout << ball << endl;
    
    return 0;
}