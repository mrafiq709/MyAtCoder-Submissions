#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, W;
    cin >> N >> W;

    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    set<int> good;
    
    for (int i = 0; i < N; i++) {
        if (A[i] <= W)
            good.insert(A[i]);
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int sum = A[i] + A[j];
            if (sum <= W)
                good.insert(sum);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                int sum = A[i] + A[j] + A[k];
                if (sum <= W)
                    good.insert(sum);
            }
        }
    }

    cout << good.size() << endl;
    return 0;
}
