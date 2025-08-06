#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int A[k];
    for(int i = 0; i < k; i++) {
        cin >> A[i];
        A[i]--;
    }
    vector<pair<int, int>> xy(n);
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        xy[i] = {x, y};
    }
    
    double max_min_distance = 0.0;
    for(int i = 0; i < n; i++) {
        double min_distance = 1e18;
        for(int j = 0; j < k; j++) {
            double dx = xy[i].first - xy[A[j]].first;
            double dy = xy[i].second - xy[A[j]].second;
            double distance = sqrt(dx * dx + dy * dy);
            if(distance < min_distance) {
                min_distance = distance;
            }
        }
        if(min_distance > max_min_distance) {
            max_min_distance = min_distance;
        }
    }
    cout << fixed << setprecision(6) << max_min_distance << endl;
    return 0;
}