#include <iostream>
#include <queue>
#include <algorithm>
#include <limits>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    //vector<vector<int>> v(n + 1, vector<int>());

    const int limit = numeric_limits<int>::max() / 2;
    vector<vector<int>> dis(n+1, vector<int>(n+1, limit));
    for (int i = 0; i <= n; i++) {
        dis[i][i] = 0;
    }

    while (true) {
        int a, b;
        cin >> a >> b;
        if (a == -1 && b == -1) {
            break;
        }

        dis[a][b] = 1;
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

    int score = limit;
    vector<int> ans;
    for (int i = 1; i <= n; i++) {
        int tmp = *max_element(dis[i].begin() + 1, dis[i].end());
        if(score > tmp) {
            score = tmp;
            ans.clear();
            ans.push_back(i);
        } else if (score == tmp) {
            ans.push_back(i);
        }
    }

    cout << score << " " << ans.size() << "\n";
    for (const auto &i: ans) {
        cout << i << " ";
    }
}