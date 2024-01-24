#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<vector<int>> v(n + 1, vector<int>());
    while (m--) {
        int a, b;
        cin >> a >>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int ans = 0;

    vector<int> vis(n + 1, false);
    queue<pair<int, int>> q;
    q.push({1, 0});
    vis[1] = true;
    while (!q.empty()) {
        auto [now, depth] = q.front();
        q.pop();
        if (depth == 2) {
            continue;
        }

        for(const auto &i : v[now]){
            if (vis[i]) {
                continue;
            }

            vis[i] = true;
            ans++;
            q.push({i, depth+1});
        }
    }

    cout << ans;
}