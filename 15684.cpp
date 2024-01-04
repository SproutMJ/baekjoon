#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

bool board[31][11] = {false, };

int n, m, h;

int ans = 987654321;
void fun(int cnt, pair<int, int> pos){
    if (cnt == 4) {
        return;
    }
    int arr[11];
    for (int k = 0; k < 11; k++) {
        arr[k] = k;
    }
    for (int row = 1; row <= h; row++) {
        for (int col = 1; col < n; col++) {
            if (board[row][col]) {
                arr[col] ^= arr[col + 1];
                arr[col+1] ^= arr[col];
                arr[col] ^= arr[col + 1];
            }
        }
    }
    bool flag = true;
    for (int k = 0; k < 11; k++) {
        if(arr[k] != k){
            flag = false;
            break;
        }
    }
    if (flag) {
        ans = min(ans, cnt);
        return;
    }

    for (int i = pos.first; i <= h; i++) {
        for (int j = pos.second; j < n; j++) {
            if (board[i][j]) {
                continue;
            }
            pair<int, int> l = {i, j - 1}, r = {i, j+1};
            if(l.second >= 1 && board[l.first][l.second]){
                continue;
            }
            if(r.second <= n - 1 && board[r.first][r.second]){
                continue;
            }
            board[i][j] = true;
            fun(cnt+1, {i, j});
            board[i][j] = false;
        }
    }
    for (int i = pos.first + 1; i <= h; i++) {
        for (int j = 1; j < n; j++) {
            if (board[i][j]) {
                continue;
            }
            pair<int, int> l = {i, j - 1}, r = {i, j+1};
            if(l.second >= 1 && board[l.first][l.second]){
                continue;
            }
            if(r.second <= n - 1 && board[r.first][r.second]){
                continue;
            }
            board[i][j] = true;
            fun(cnt+1, {i, j});
            board[i][j] = false;
        }
    }
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    cin >> n >> m >> h;
    while (m--) {
        int a, b;
        cin >> a >> b;
        board[a][b] = true;
    }

    for (int i = 1; i <= h; i++) {
        for (int j = 1; j < n; j++) {
                fun(0, {i, j});
        }
    }

    if (ans == 987654321) {
        cout << -1;
    }else{
        cout << ans;
    }
}