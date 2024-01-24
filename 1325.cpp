#include <iostream>
#include <queue>
#include <algorithm>
#include <limits>
using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    const int limit = numeric_limits<int>::max() / 2;
    vector<vector<int>> dis(n + 1, vector<int>(n + 1, limit));
    while (m--) {
        int a, b;
        cin >> a>>b;

        //dis[a][b] = 1;
        dis[b][a] = 1;
    }

    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (dis[i][j] > dis[i][k] + dis[k][j]) {
                    dis[i][j] = dis[i][k] + dis[k][j];
                }
            }
        }
    }

    int tmp = limit;
    vector<int> ans;
    for (int i = 1; i <= n; i++) {
        const int hack = count(dis[i].begin() + 1, dis[i].end(), limit);
        if (hack < tmp) {
            tmp = hack;
            ans.clear();
            ans.push_back(i);
        } else if (hack == tmp) {
            ans.push_back(i);
        }
    }

    for (const auto &i: ans) {
        cout << i << " ";
    }
}