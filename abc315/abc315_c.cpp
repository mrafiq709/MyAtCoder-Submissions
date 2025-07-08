#include <bits/stdc++.h>
using namespace std;

struct FS {
    int x, y;
};

bool comparator (const FS& a, const FS& b) {
    return a.y > b.y;
}


int main() {
    int n;
    vector<FS> vec;
    cin >> n;
    int x, y;
    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        vec.push_back({x, y});
    }
    
    sort(vec.begin(), vec.end(), comparator);
    
    for(int i = 0; i < n - 1; i++) {
        if(vec[i].x == vec[i+1].x) {
            vec[i+1].y = vec[i+1].y/2;
        }
    }
    
    sort(vec.begin(), vec.end(), comparator);
    
    cout << vec[0].y + vec[1].y << endl;

    return 0;
}