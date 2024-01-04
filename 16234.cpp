#include <iostream>
#include <queue>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, l, r;
    cin >> n >> l >> r;

    vector<vector<int>> v(n, vector<int>(n, 0));
    for (auto &i: v) {
        for (auto &j: i) {
            cin >> j;
        }
    }

    pair<int, int> di[4] = {{-1, 0},
                            {1,  0},
                            {0,  -1},
                            {0,  1}};
    int ans = 0;
    while(true) {
        bool flag = false;
        vector<vector<int>> visited(n, vector<int>(n, -1));
        map<int, pair<int, int>> population;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (visited[i][j] != -1) {
                    continue;
                }

                population.insert({population.size() + 1, {1, v[i][j]}});
                visited[i][j] = population.size();
                queue<pair<int, int>> qu;
                qu.push({i, j});
                while (!qu.empty()) {
                    pair<int, int> now = qu.front();
                    qu.pop();

                    for (auto &diff: di) {
                        int row = now.first + diff.first;
                        int col = now.second + diff.second;

                        if (row < 0 || row >= n || col < 0 || col >= n) {
                            continue;
                        }
                        if (visited[row][col] != -1) {
                            continue;
                        }
                        if (l <= abs(v[now.first][now.second] - v[row][col]) &&
                            abs(v[now.first][now.second] - v[row][col]) <= r) {
                            visited[row][col] = population.size();
                            population[population.size()].first++;
                            population[population.size()].second += v[row][col];
                            qu.push({row, col});
                            flag = true;
                        }
                    }
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                v[i][j] = population[visited[i][j]].second / population[visited[i][j]].first;
            }
        }
        if (flag) {
            ans++;
        } else {
            break;
        }
    }

    cout << ans;
}