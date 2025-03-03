#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[100];
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++) {
        arr[s[i]]++;
    }
    
    int cnt = 0;
    for(int i = 64; i < 98; i++) {
        // cout << arr[i] << " ";
        if(arr[i] > 1) cnt++;
    }
    
    if(cnt >= 2) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}