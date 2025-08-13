#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    //A<B, A<C, B<C
    
    // > < < : A
    // < < < : B
    // > > > : B
    // < < > : C
    // > > < : C
    
    vector<char> ch(3);
    for(int i = 0; i < 3; i++) {
        cin >> ch[i];
    }
    if(ch[0] == ch[1] && ch[2] == ch[1]) cout << "B" << endl;
    else if(ch[1] == ch[2]) cout << "A" << endl;
    else cout << "C" << endl;
    return 0;
}