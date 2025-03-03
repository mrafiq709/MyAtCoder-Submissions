#include <bits/stdc++.h>
using namespace std;

int main() {
    string abc;
    int arr[123];
    cin >> abc;
    for(int i = 0; i < abc.length(); i++) {
        arr[abc[i]]++;
    }
    
    for(int i = 97; i < 123; i++) {
        if(arr[i] > 1) {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    return 0;
}
