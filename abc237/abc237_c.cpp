#include <bits/stdc++.h>
using namespace std;

bool isPalindrom(string str, int cntF, int cntL) {
    for(int i = cntF, j = str.length() - cntL - 1; i < str.length() - cntL; i++, j--) {
        // cout << str[i] << " " << str[j] << endl;
        if(str[i] != str[j]) {
            return false;
        }
    }
    return true;
}

int main() {
    string str;
    cin >> str;
    int len = str.length(), cntF = 0, cntL = 0;
    
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == 'a') cntF++;
        else break;
    }
    
    for(int j = len - 1; j >= 0; j--) {
        if(str[j] == 'a') cntL++;
        else break;
    }
    
    if(cntF > cntL) {
        puts("No");
        return 0;
    }
    
    bool ok = isPalindrom(str, cntF, cntL);
    
    if(ok) {
        puts("Yes");
        return 0;
    }
    
    puts("No");
    return 0;
}