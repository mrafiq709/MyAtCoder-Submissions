#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> st(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    st = arr;
    sort(arr.begin(), arr.end(), [](const int a, const int b) {return a > b; });
    
    for(int i = 0; i < n; i++) {
        if(st[i] == arr[0]) cout << arr[1] << endl;
        else cout << arr[0] << endl;
    }
    
    return 0;
}