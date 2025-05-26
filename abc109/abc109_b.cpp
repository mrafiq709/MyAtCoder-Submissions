/*
/ * * * \  / * * * \  / * * * \  / * * * \  / * * * \
|   R   |  |   A   |  |   F   |  |   I   |  |   Q   |
\ * * * /  \ * * * /  \ * * * /  \ * * * /  \ * * * /
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    map<string, int> strMap;
    int n;
    cin >> n;
    char old;
    bool ans = true;
    for(int i = 0; i < n; i++) {
        cin >> str;
        strMap[str]++;
        if(i != 0 && old != str[0] || strMap[str] > 1) {
            ans = false;
        }
        old = str[str.length() - 1];
    }

    ans ? cout << "Yes" : cout << "No";
    return 0;
}
