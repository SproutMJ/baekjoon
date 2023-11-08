#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
int n, m;
bool vis[1001];
int matchWork[1001];
vector<vector<int>> v;

bool dfs(int person) {
    if (vis[person]) {
        return false;
    }
    vis[person] = true;

    for (const auto &i: v[person]) {
        if (matchWork[i] == 0 || dfs(matchWork[i])) {
            matchWork[i] = person;
            return true;
        }
    }
    return false;
}

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    cin >> n >> m;
    v.resize(n + 1);
    for (int i = 1; i <= n; i++) {
        int canWorks;
        cin >> canWorks;
        v[i].resize(canWorks);
        for (auto &j: v[i]) {
            cin >> j;
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        fill(begin(vis), end(vis), false);
        if (dfs(i)) {
            ans++;
        }
    }

    cout << ans;
}