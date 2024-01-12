#include <iostream>
#include <queue>
#include <algorithm>
#include<limits>
using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >>m;

    vector<vector<pair<int, int>>> v(n+1, vector<pair<int, int>>());
    while (m--) {
        int a, b, c;
        cin >> a>>b>>c;

        v[a].push_back({b, c});
    }

    int a, b;
    cin >> a >>b;
    const int limit = numeric_limits<int>::max();
    vector<int> dist(n+1, limit);
    vector<bool> vis(n + 1, false);
    dist[a] = 0;
    for (int i = 0; i < n - 1; i++) {
        int mv, md = limit;
        for (int k = 1; k <= n; k++) {
            if (vis[k] == false && dist[k] <= md) {
                md = dist[k];
                mv = k;
            }
        }

        vis[mv] = true;
        for (const auto &k: v[mv]) {
            if (vis[k.first] == false && dist[mv] != limit && dist[mv] + k.second < dist[k.first]) {
                dist[k.first] = dist[mv] + k.second;
            }
        }
    }

    cout << dist[b];
}