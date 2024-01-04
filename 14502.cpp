#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int board[9][9];
int mx = 0;

int n, m;

void dfs(int depth, pair<int, int> pos) {
    if (depth == 2) {
        int diffuse[9][9];
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                diffuse[i][j] = board[i][j];
            }
        }

        bool visited[9][9] = {false,};
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= m; j++) {
                visited[i][j] = false;
            }
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (visited[i][j] == false && diffuse[i][j] == 2) {
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    visited[i][j] = true;

                    while (!q.empty()) {
                        pair<int, int> now = q.front();
                        q.pop();

                        pair<int, int> diff[4] = {{-1, 0},
                                                  {1,  0},
                                                  {0,  -1},
                                                  {0,  1}};
                        for (const auto &d: diff) {
                            int row = d.first + now.first;
                            int col = d.second + now.second;
                            if (row < 1 || n < row || col < 1 || m < col || visited[row][col] == true) {
                                continue;
                            }
                            if (diffuse[row][col] == 1) {
                                continue;
                            }

                            q.push({row, col});
                            diffuse[row][col] = 2;
                            visited[row][col] = true;
                        }
                    }
                }
            }
        }

        int tmp = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if(diffuse[i][j] == 0)
                    tmp++;
            }
        }
        mx = max(mx, tmp);
        return;
    }

    for (int j = pos.second; j <= m; j++) {
        if (board[pos.first][j] == 0) {
            board[pos.first][j] = 1;
            dfs(depth + 1, {pos.first, j});
            board[pos.first][j] = 0;
        }
    }
    for (int i = pos.first; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (board[i][j] == 0) {
                board[i][j] = 1;
                dfs(depth + 1, {i, j});
                board[i][j] = 0;
            }
        }
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
            if (board[i][j] == 0) {
                board[i][j] = 1;
                dfs(0, {i, j});
                board[i][j] = 0;
            }
        }
    }

    cout << mx;
}