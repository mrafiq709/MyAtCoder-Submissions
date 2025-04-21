#include <bits/stdc++.h>
using namespace std;

int main() {
  int arr[8];
  memset(arr, 0, sizeof(arr));
  int a, b, c;
  cin >> a >> b >> c;
  arr[a]++;
  arr[b]++;
  arr[c]++;
  
  if(arr[5] == 2 && arr[7] == 1) puts("YES");
  else puts("NO");
  return 0;
}