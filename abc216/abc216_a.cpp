#include <bits/stdc++.h>
using namespace std;

int main() {
  string xy, tmp;
  cin >> xy;
  tmp = xy;
  int x = stoi(tmp.erase(tmp.length() - 2, 2));
  int y = xy[xy.length()-1] - 48;
  if(y >= 0 && y <= 2) {
    cout << x << "-" << endl;
  } else if(y >= 3 && y <= 6) {
    cout << x << endl;
  } else {
    cout << x << "+" << endl;
  }
  return 0;
}