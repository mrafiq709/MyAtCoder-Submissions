#include <bits/stdc++.h>
using namespace std;

 int main() {
     int a, b;
     cin >> a >> b;
     if((a == 1 || (a > b && b != 1)) && a != b) cout << "Alice";
     else if((b == 1 || (b > a && a !=1)) && a != b) cout << "Bob";
     else cout << "Draw";
     
     return 0;
 }