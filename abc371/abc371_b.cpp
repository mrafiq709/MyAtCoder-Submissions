#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n];
    memset(arr, 1, sizeof(arr));
    for(int i = 0; i < m; i++) {
        int num;
        char sx;
        cin >> num >> sx;
        if(sx == 'M' && arr[num - 1]) {
            arr[num - 1] = 0;
            puts("Yes");
        } else puts("No");
    }
    return 0;
}