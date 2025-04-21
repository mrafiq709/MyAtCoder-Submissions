#include <bits/stdc++.h>
using namespace std;
char str[11];
void swap(char *x,char *y) { 
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
  int a, b;
  cin >> str >> a >> b;
  swap(str + a - 1,str + b - 1);
  cout << str << endl;
  return 0;
}