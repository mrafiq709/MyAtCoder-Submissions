#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, p;
  queue<int> line;
  cin >> n >> a;
  for(int i = 0; i < n; i++) {
    cin >> p;
    line.push(p);
  }
  
  int total = 0;
  while(!line.empty()) {
    int front = line.front();
    line.pop();
    // 3 4
    // 0 2 10
    // ---------
    // 4
    // 8
    // 14
    // cout << front << " " << total << endl;
    if(front > total) {
      total = front + a;
    } else {
      total += a;
    }
    
    
    cout << total << endl;
  }
  return 0;
}