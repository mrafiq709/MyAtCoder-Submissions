#include <bits/stdc++.h>
using namespace std;

int main() {
    string dishes[101];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> dishes[i];
    }
    
    for(int i = 0; i < n - 1; i++) {
        if(dishes[i] == "sweet" && dishes[i+1] == "sweet" && i+1 != n - 1) {
            puts("No");
            return 0;
        }
    }
    puts("Yes");
    return 0;
}