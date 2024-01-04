#include <iostream>
#include <queue>

using namespace std;

int board[501][501];
int n, m;

int mx = 0;

bool visited[501][501] = {false, };
void dfs(int idx, int score, pair<int, int> pos){
    if (idx == 4) {
        mx = max(score, mx);
        return;
    }

    pair<int, int> diff[4] = {{-1, 0}, {1, 0}, {0, -1}, {0,1}};
    for (const auto &d: diff) {
        int row = d.first + pos.first;
        int col = d.second + pos.second;

        if (row < 1 || row > n || col < 1 || col > m || visited[row][col]) {
            continue;
        }
        visited[row][col] = true;
        dfs(idx + 1, score + board[row][col], {row, col});
        visited[row][col] = false;
    }
}

pair<int, int> shape[4][3] = {{{0, -1}, {0, 1}, {1, 0}}, {{0, -1}, {0, 1}, {-1, 0}}, {{1, 0}, {-1, 0}, {0, -1}},{{1, 0}, {-1, 0}, {0, 1}}};
void exep(pair<int, int> pos){
    for(int i = 0; i<4; i++){
        int score = board[pos.first][pos.second];
        for (int j = 0; j < 3; j++) {
            int row = pos.first + shape[i][j].first;
            int col = pos.second + shape[i][j].second;
            if (row < 1 || row > n || col < 1 || col > m) {
                continue;
            }
            score += board[row][col];
        }
        mx = max(mx, score);
    }
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> board[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            visited[i][j] = true;
            dfs(1, board[i][j], {i,j});
            visited[i][j] = false;
            exep({i, j});
        }
    }

    cout << mx;
}