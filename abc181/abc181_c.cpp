#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
};

bool isColinear(Point a, Point b, Point c) {
    int area = a.x * (b.y - c.y) +
               b.x * (c.y - a.y) +
               c.x * (a.y - b.y);
    return area == 0;
}

int main() {
    int n;
    vector<Point> points;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        points.push_back({x, y});
    }
    
    for (int i = 0; i < n; ++i)
        for (int j = i+1; j < n; ++j)
            for (int k = j+1; k < n; ++k)
                if (isColinear(points[i], points[j], points[k])) {
                    cout << "Yes" << endl;
                    return 0;
                }

    puts("No");
    return 0;
}
