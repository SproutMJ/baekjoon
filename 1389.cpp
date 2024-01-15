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

    const int limit = numeric_limits<int>::max() / 2;
    vector<vector<int>> board(n + 1, vector<int>(n + 1, limit));
    for(int i = 1; i<=n; i++){
        board[i][i] = 0;
    }

    while (m--) {
        int a, b;
        cin >> a >> b;
        board[a][b] = 1;
        board[b][a] = 1;
    }

    vector<vector<int>> dist = board;
    for(int k = 1; k<=n; k++){
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=n; j++){
                if(dist[i][j] > dist[i][k] + dist[k][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    int ans, tmp = limit;
    for (int j = 1; j<=n; j++) {
        int sum = 0;
        for (const auto &i: dist[j]) {
            if(i == limit)
                continue;
            sum+=i;
        }
        if (sum < tmp) {
            tmp = sum;
            ans = j;
        }
    }

    cout << ans;
}