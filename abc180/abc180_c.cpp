#include <bits/stdc++.h>
using namespace std;

long long N;

vector<long long> makeDivisor(long long N) {
    vector<long long> divisors;
    
    for (long long i = 1; i <= sqrt(N); i++) {
        if(N % i == 0) {
            divisors.push_back(i);
            if(i != N/i) divisors.push_back(N / i);
        }
    }
    return divisors;
}

int main() {
    cin >> N;
    auto divisors = makeDivisor(N);
    sort(divisors.begin(), divisors.end());
    
    for(long long i = 0; i < divisors.size(); i++) {
        cout << divisors[i] << endl;
    }
    return 0;   
}