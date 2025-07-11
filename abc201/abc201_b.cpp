#include <bits/stdc++.h>
using namespace std;

struct Node {
    string name;
    int v;
};

bool comparator(const Node &a, const Node &b) {
    return a.v > b.v;
}

int main() {
    vector<Node> vec;
    int n, value;
    string str;
    cin >> n;
    vec.resize(n);
    for(int i = 0; i < n; i++) {
        cin >> str >> value;
        vec.push_back({str, value});
    }
    sort(vec.begin(), vec.end(), comparator);
    cout << vec[1].name << endl;
    return 0;
}