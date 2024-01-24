#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> m >> n;

    vector<vector<int>> v(n + 1, vector<int>(m + 1, 100));
    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        for(int j = 1; j<=m; j++) {
            v[i][j] = (int)(s[j-1] - '0');
        }
    }

    vector<vector<int>> board(n + 1, vector<int>(m + 1, 2147483647));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> pq;

    board[1][1]  = 0;
    pq.push({0, {1, 1}});
    while(!pq.empty()){
        auto now = pq.top();
        int dis = now.first;
        pair<int, int> pos = now.second;
        pq.pop();

        if(board[pos.first][pos.second] == 2147483647){
            continue;
        }

        pair<int, int> dd[4] = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
        for(const auto &d: dd){
            int r = pos.first + d.first;
            int c = pos.second + d.second;
            if(r<1 || r>n || c<1 || c>m)
                continue;

            if(v[r][c] == 1){
                if(board[r][c] > dis + 1){
                    board[r][c] = dis + 1;
                    pq.push({board[r][c], {r, c}});
                }
            }else{
                if(board[r][c] > dis){
                    board[r][c] = dis;
                    pq.push({board[r][c], {r, c}});
                }
            }
        }
    }

    cout << board[n][m];
}