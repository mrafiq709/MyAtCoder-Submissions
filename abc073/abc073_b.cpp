#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n, l1, r1;
    cin >> n;
    int sum = 0;
    while(n--) {
        cin >> l1 >> r1;
        if(l1 == r1) sum++;
        else sum += r1 - l1 + 1;
    }
    cout << sum << endl;
    return 0;
}