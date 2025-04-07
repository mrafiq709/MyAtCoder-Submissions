#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, A, B;
  cin >> X >> A >> B;
  int left = X - A;
  cout << left % B << endl;
  return 0;
}