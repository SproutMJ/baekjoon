#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m, x;
    cin >> n >> m >> x;

    const int limit = 2147483647/2;
    vector<vector<int>> dis(n + 1, vector<int>(n + 1, limit));
    for (int i = 1; i <= n; i++) {
        dis[i][i] = 0;
    }

    while(m--){
        int a, b, c;
        cin >> a >> b >> c;
        dis[a][b] = c;
    }

    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            if(dis[i][k] == limit)
                continue;
            for (int j = 1; j <= n; j++) {
                if(dis[i][j] > dis[i][k] + dis[k][j])
                    dis[i][j] = dis[i][k] + dis[k][j];
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if(i == x)
            continue;

        ans = max(ans, dis[x][i] + dis[i][x]);
    }

    cout << ans;
}