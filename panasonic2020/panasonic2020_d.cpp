#include <bits/stdc++.h>
using namespace std;

int N;
vector<string> results;

void dfs(string current, int used) {
    if (current.size() == N) {
        results.push_back(current);
        return;
    }
    for (char c = 'a'; c <= 'a' + used; ++c) {
        int next_used = used;
        if (c == 'a' + used) next_used++;
        dfs(current + c, next_used);
    }
}

int main() {
    cin >> N;
    dfs("", 0);
    for (const auto& s : results) {
        cout << s << endl;
    }
    return 0;
}
