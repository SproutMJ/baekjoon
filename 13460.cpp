#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

char map[11][11];

pair<int, int> red, blue;
struct tama{
    pair<int, int> blue, red;
    int cnt;
};

int bfs(){
    tama start;
    start.blue = blue;
    start.red = red;
    start.cnt = 0;

    int ans = -1;

    bool visited[11][11][11][11] = {false, };
    queue<tama> qu;
    qu.push(start);
    visited[start.red.first][start.red.second][start.blue.first][start.blue.second] = true;
    while (!qu.empty()) {
        tama now = qu.front();
        qu.pop();

        if (map[now.red.first][now.red.second] == 'O') {
            return now.cnt;
        }
        if (now.cnt > 10) {
            return -1;
        }

        pair<int, int> diff[4] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        for (const auto &d: diff) {
            pair<int, int> _red = now.red, _blue = now.blue;

            while(map[_red.first][_red.second] != '#' && map[_red.first][_red.second] != 'O'){
                _red = {_red.first + d.first, _red.second + d.second};
            }
            if (map[_red.first][_red.second] == '#') {
                _red = {_red.first - d.first, _red.second - d.second};
            }

            while(map[_blue.first][_blue.second] != '#' && map[_blue.first][_blue.second] != 'O'){
                _blue = {_blue.first + d.first, _blue.second + d.second};
            }
            if (map[_blue.first][_blue.second] == 'O') {
                continue;
            }
            if (map[_blue.first][_blue.second] == '#') {
                _blue = {_blue.first - d.first, _blue.second - d.second};
            }

            if (_red == _blue) {
                if(abs(_red.first-now.red.first)+abs(_red.second-now.red.second) > abs(_blue.first-now.blue.first)+abs(_blue.second-now.blue.second)) {
                    _red = {_red.first - d.first, _red.second - d.second};
                }else{
                    _blue = {_blue.first - d.first, _blue.second - d.second};
                }
            }

            if (visited[_red.first][_red.second][_blue.first][_blue.second] == false) {
                visited[_red.first][_red.second][_blue.first][_blue.second] = true;

                tama nxt;
                nxt.red = _red;
                nxt.blue = _blue;
                nxt.cnt = now.cnt + 1;
                qu.push(nxt);
            }
        }
    }
    return ans;
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;


    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> map[i][j];
            if (map[i][j] == 'R') {
                red = {i, j};
            }
            if (map[i][j] == 'B') {
                blue = {i, j};
            }
        }
    }

    cout << bfs();
    return 0;
}
