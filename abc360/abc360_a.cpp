#include <bits/stdc++.h>
using namespace std;

int main() {
  unordered_map<char, int> arr;
  char ch;
  for(int i = 0; i < 3; i++) {
      cin >> ch;
      arr[ch] = i;
  }
  if(arr['R'] < arr['M']) puts("Yes");
  else puts("No");
  return 0;
}