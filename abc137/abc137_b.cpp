#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, i;
  cin >> n >> i;
  int MIN = i - (n - 1);
  int MAX = i + (n - 1);
  while(MIN <= MAX) {
    cout << MIN << " ";
    MIN++;
  }
  return 0;
}