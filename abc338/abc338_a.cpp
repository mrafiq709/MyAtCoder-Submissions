#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    if((char)str[0] > 'Z') {
        puts("No");
        return 0;
    }
    for(int i = 1; i < str.length(); i++) {
        if((char)str[i] < 'a') {
            puts("No");
            return 0;
        }
    }
    
    puts("Yes");
    return 0;
}