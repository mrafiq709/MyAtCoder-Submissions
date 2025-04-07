#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    vector <int> arr(123);
    for(int i = 0; i < str.length(); i++) {
        arr[str[i]]++;
    }
    
    for(int i = 97; i <= 122; i++) {
        if(arr[i] % 2 == 1) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}