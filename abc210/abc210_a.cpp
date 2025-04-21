#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, X, Y;
  cin >> N >> A >> X >> Y;
  int need = 0;
  if(N <= A) {
    need = N * X;
  } else {
    need = (A * X) + (N - A) * Y;
  }
  cout << need << endl;
  return 0;
}