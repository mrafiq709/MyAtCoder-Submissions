#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    vector<int> v = {a, b, c, d, e};
    sort(v.begin(), v.end());
    int ans = INT_MAX;
    
    do {
        int sum = 0;
        for(int i = 0; i < 5; i++) {
            sum += v[i];
            if(i != 4 && sum % 10 != 0) {
                sum += (10 - sum % 10);
            }
        }
        ans = min(ans, sum);
    } while(next_permutation(v.begin(), v.end()));
    
    cout << ans << endl;
    return 0;
}