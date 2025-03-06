#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int num1 = 0;
    int num2 = 0;
    int digits[10] = {0};
    
    while(N) {
        digits[N % 10]++;
        N /= 10;
    }
    
    for(int i = 9; i >= 0; i--) {
        while(digits[i]) {
            if(num1 <= num2) num1 = num1 * 10 + i;
            else num2 = num2 * 10 + i;
            digits[i]--;
        }
    }
    cout << num1 * num2 << endl;
    return 0;
}