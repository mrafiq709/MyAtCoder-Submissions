/*
/ * * * \  / * * * \  / * * * \  / * * * \  / * * * \
|   R   |  |   A   |  |   F   |  |   I   |  |   Q   |
\ * * * /  \ * * * /  \ * * * /  \ * * * /  \ * * * /
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> words;
    string str;
    for(int i = 0; i < n; i++) {
      cin >> str;
      words.push_back(str);
    }
    
    sort(words.begin(), words.end());
    map <string, int> mp;
    
    int Mx = 0;
    for (const auto& word : words) {
     mp[word]++;
     if(mp[word] > Mx) Mx = mp[word];
    }
    
    map<string, int>::iterator it = mp.begin();
    while (it != mp.end()) {
      if(Mx == it->second) cout << it->first << endl;
      ++it;
    }

    return 0;
}
