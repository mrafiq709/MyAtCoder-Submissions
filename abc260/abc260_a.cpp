#include <bits/stdc++.h>
using namespace std;

int main() {
  int arr[123];
  for(int i = 0; i < 3; i++) {
    char ch;
    cin >> ch;
    arr[ch]++;
  }
  
  for(int i = 97; i < 123; i++) {
    if(arr[i] == 1) {
      cout << (char)i << endl;
      return 0;
    }
  }
  puts("-1");
  return 0;
}