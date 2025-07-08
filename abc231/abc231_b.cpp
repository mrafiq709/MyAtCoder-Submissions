#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    map<string, int> votes;
    string str;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> str;
        votes[str]++;
    }
    
    vector<pair<string, int>> vec(votes.begin(), votes.end());
    sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
    });
    
    cout << vec[0].first << endl;
    
    return 0;
}