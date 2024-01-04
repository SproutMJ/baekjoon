#include <iostream>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;

int n, m;
int ans = 987654321;
map<int, pair<int, int>> chiken;
vector<pair<int, int>> house;
vector<bool> vis(13, false);

void dfs(int idx, int cnt){
    if (cnt == m) {
        int tmp = 0;
        vector<int> point;
        for (const auto &i: house) {
            point.clear();
            for (int j = 0; j<chiken.size(); j++) {
                if (vis[j]) {
                    point.push_back(abs(chiken[j].first - i.first) + abs(chiken[j].second - i.second));
                }
            }
            tmp += *min_element(point.begin(), point.end());
        }
        ans = min(ans, tmp);
        return;
    }

    for (int i = idx; i < chiken.size(); i++) {
        if (vis[i]) {
            continue;
        }

        vis[i] = true;
        dfs(i, cnt+1);
        vis[i] = false;
    }
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    cin >> n >> m;

    int chikenn = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int x;
            cin >> x;
            if (x == 2) {
                chiken[chikenn] = {i, j};
                chikenn++;
                continue;
            }
            if (x == 1) {

                house.push_back({i, j});
            }
        }
    }

    dfs(0, 0);
    cout << ans;
}