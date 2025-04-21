#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, v;
  cin >> n;
  unordered_map<int, int> arr;
  for(int i = 0; i < n; i++) {
      cin >> v;
      arr[v]++;
      if(arr[v] > 1) {
        puts("NO");
        return 0;
      }
  }

  puts("YES");
  return 0;
}