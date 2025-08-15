#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    int len = n.length();
    int sum = 0;
    for(int i = 0; i < len; i++) {
        string s;
        s = n[i];
        sum += stoi(s);
    }
    
    int orginalNum = stoi(n);
    if(orginalNum % sum == 0) puts("Yes");
    else puts("No");
    
    return 0;
}