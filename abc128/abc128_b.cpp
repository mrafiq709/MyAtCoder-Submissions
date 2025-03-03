#include <bits/stdc++.h>
using namespace std;

struct CityPoint {
    string city;
    int point, index;
};

bool comparator (const CityPoint& a, const CityPoint& b) {
    if(a.city == b.city)
        return a.point > b.point;
    return a.city < b.city;
}

int main() {
    int N;
    cin >> N;
    vector<CityPoint> cityPointVec(N);
    // cityPointVec.resize(N);
    for(int i = 0; i < N; i++) {
        string c;
        int p;
        cin >> c >> p;
        cityPointVec[i] = {c, p, i + 1};
    }
    
    sort(cityPointVec.begin(), cityPointVec.end(), comparator);
    
    for(int i = 0; i < cityPointVec.size(); i++) {
        // cout << cityPointVec[i].city << cityPointVec[i].point << endl;
        cout << cityPointVec[i].index << endl;
    }
    
    return 0;
}