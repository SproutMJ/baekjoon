#include <iostream>
#include <queue>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int r, c, t;
    cin >> r >> c >> t;

    vector<pair<int, int> > air;
    vector<vector<int>> v(r, vector<int>(c, 0));
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> v[i][j];
            if (v[i][j] == -1) {
                air.push_back({i, j});
            }
        }
    }

    pair<int, int> di[4] = {{-1, 0},
                            {1,  0},
                            {0,  -1},
                            {0,  1}};
    while (t--) {
        map<pair<int, int>, int> add;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (v[i][j] > 0) {
                    int dust = v[i][j] / 5;
                    for (auto diff: di) {
                        int row = diff.first + i;
                        int col = diff.second + j;
                        if (row < 0 || row >= r || col < 0 || col >= c || v[row][col] == -1) {
                            continue;
                        }
                        v[i][j] -= dust;
                        if (add.count({row, col}) == 0) {
                            add[{row,col}] = dust;
                        } else {
                            add[{row, col}] += dust;
                        }
                    }
                }
            }
        }

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                v[i][j] += add[{i, j}];
            }
        }



        for(int row = air[0].first - 1; row>0; row--){
            v[row][0] = v[row-1][0];
        }

        for(int col = 0; col<c; col++){
            v[0][col] = v[0][col + 1];
        }

        for(int row = 0; row<air[0].first; row++){
            v[row][c-1] = v[row+1][c-1];
        }

        for(int col = c-1; col>1; col--){
            v[air[0].first][col] = v[air[0].first][col - 1];
        }
        v[air[0].first][1] = 0;

        for(int row = air[1].first +1; row<r-1; row++){
            v[row][0] = v[row+1][0];
        }

        for(int col = 0; col<c - 1; col++){
            v[r-1][col] = v[r-1][col + 1];
        }

        for(int row = r-1; row>air[1].first; row--){
            v[row][c-1] = v[row - 1][c-1];
        }

        for(int col = c-1; col>1; col--){
            v[air[1].first][col] = v[air[1].first][col - 1];
        }
        v[air[1].first][1] = 0;

    }

    int ans = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
                ans += v[i][j];
        }
    }

    cout << ans + 2;
}