#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, arr[51];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int cnt = 0, p = 0;
    bool t1 = false;
    // 5 2 3 4 1
    for (int i = 1; i < n; i++) {
        if(arr[p] > arr[i]) {
            t1 = true;
        } else {
            if(t1) {
                int tmp = arr[p];
                arr[p] = arr[i-1];
                arr[i-1] = tmp;
            }
            t1 = false;
            p++;
        }
    }
    
    if(t1) {
        int tmp = arr[p];
        arr[p] = arr[n-1];
        arr[n-1] = tmp;
    }
    
    for (int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i+1]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    
    puts("YES");
    
    return 0;
}