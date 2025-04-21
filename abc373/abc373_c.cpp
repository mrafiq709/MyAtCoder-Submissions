#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int Mx1 = -1000000001, Mx2 = -1000000001, value;
  cin >> n;
  for(int i = 0; i < n; i++) {
    cin >> value;
    if(Mx1 < value) Mx1 = value;
  }
  
  for(int i = 0; i < n; i++) {
    cin >> value;
    if(Mx2 < value) Mx2 = value;
  }
  
  cout << Mx1 + Mx2 << endl;
  return 0;
}