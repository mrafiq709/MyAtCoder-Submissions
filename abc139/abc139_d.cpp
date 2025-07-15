#include <bits/stdc++.h>
using namespace std;

int main() {
    long n, sum;
    cin >> n;
    /**
     * N = 4
     * To maximize the sum, get maximum value from Pi and do the reminder Pi{1, 2, 3 , 4} is 4
     * so, i = {1, 2 , 3, 4}
     * i % Pi = Mi
     * 1 % 4  = 1
     * 2 % 4  = 2
     * 3 % 4  = 3
     * 4 % 4  = 0
     * 
     * So this is the sum of 1 + 2 + 3
     * Which is 1 + 2 + ... + n - 1
     * So, Formula is (n * (n -1)) / 2;
     */
    
    sum = (n*(n-1))/2;
    
    cout << sum <<endl;
    
    return 0;
}