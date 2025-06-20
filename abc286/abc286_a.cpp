#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, p, q, r, s;
  cin >> n >> p >> q >> r >> s;
  int arr[n];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  --p; --q; --r; --s;
  
  for (int i = 0; i <= q - p; ++i) {
    swap(arr[p + i], arr[r + i]);
  }
  
  for (int val : arr) {
    cout << val << " ";
  }
  
  cout << endl;
  
  return 0;
}