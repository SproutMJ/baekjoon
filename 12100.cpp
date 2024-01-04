#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int n;
int board[21][21] = {0, };

void move(int flag){
    switch (flag) {
        case 0:
            for (int i = 1; i <= n; i++) {
                queue<int> q;
                for (int j = 1; j <= n; j++) {
                    if (board[i][j] != 0) {
                        q.push(board[i][j]);
                        board[i][j] = 0;
                    }
                }
                queue<int> add;
                while (!q.empty()) {
                    int now = q.front();
                    q.pop();
                    if (!q.empty() && now == q.front()) {
                        add.push(now * 2);
                        q.pop();
                    } else {
                        add.push(now);
                    }
                }
                int idx = 1;
                while (!add.empty()) {
                    board[i][idx] = add.front();
                    add.pop();
                    idx++;
                }
            }
            break;
        case 1:
            for (int i = 1; i <= n; i++) {
                queue<int> q;
                for (int j = n; j >= 1; j--) {
                    if (board[i][j] != 0) {
                        q.push(board[i][j]);
                        board[i][j] = 0;
                    }
                }
                queue<int> add;
                while (!q.empty()) {
                    int now = q.front();
                    q.pop();
                    if (!q.empty() && now == q.front()) {
                        add.push(now * 2);
                        q.pop();
                    } else {
                        add.push(now);
                    }
                }
                int idx = n;
                while (!add.empty()) {
                    board[i][idx] = add.front();
                    add.pop();
                    idx--;
                }
            }
            break;
        case 2:
            for (int j = 1; j <= n; j++) {
                queue<int> q;
                for (int i = 1; i <= n; i++) {
                    if (board[i][j] != 0) {
                        q.push(board[i][j]);
                        board[i][j] = 0;
                    }
                }
                queue<int> add;
                while (!q.empty()) {
                    int now = q.front();
                    q.pop();
                    if (!q.empty() && now == q.front()) {
                        add.push(now * 2);
                        q.pop();
                    } else {
                        add.push(now);
                    }
                }
                int idx = 1;
                while (!add.empty()) {
                    board[idx][j] = add.front();
                    add.pop();
                    idx++;
                }
            }
            break;
        case 3:
            for (int j = 1; j <= n; j++) {
                queue<int> q;
                for (int i = n; i >= 0; i--) {
                    if (board[i][j] != 0) {
                        q.push(board[i][j]);
                        board[i][j] = 0;
                    }
                }
                queue<int> add;
                while (!q.empty()) {
                    int now = q.front();
                    q.pop();
                    if (!q.empty() && now == q.front()) {
                        add.push(now * 2);
                        q.pop();
                    } else {
                        add.push(now);
                    }
                }
                int idx = n;
                while (!add.empty()) {
                    board[idx][j] = add.front();
                    add.pop();
                    idx--;
                }
            }
            break;
    }
}

int mx = 0;

void dfs(int idx){
    if (idx == 5) {
        return;
    }

    int _board[21][21];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            _board[i][j] = board[i][j];
        }
    }

    for (int ii = 0; ii < 4; ii++) {
        move(ii);
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                mx = max(mx, board[i][j]);
            }
        }
        dfs(idx+1);

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                board[i][j] = _board[i][j];
            }
        }
    }
}

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> board[i][j];
        }
    }

    dfs(0);
    cout << mx;
}