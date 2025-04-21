#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  int sum = 0;
  cin >> n;
  for(int i = 0; i < n.length(); i++) {
    sum += n[i] - 48;
  }
  
  if(sum % 9 == 0) puts("Yes");
  else puts("No");
  return 0;
}