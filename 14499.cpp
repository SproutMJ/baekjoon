#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
int sgo[4][3] = {{0, 0, 0}, };

pair<int, int> pos;

pair<int, int> go(pair<int, int> p, int di){
    if (di == 1) {
        p.second++;
    } else if (di == 2) {
        p.second--;
    } else if (di == 3) {
        p.first--;
    } else p.first++;

    return p;
}

void turn(int direction){
    if (direction == 1) {
        int tmp = sgo[1][2];
        sgo[1][2] = sgo[1][1];
        sgo[1][1] = sgo[1][0];
        sgo[1][0] = sgo[3][1];
        sgo[3][1] = tmp;
    } else if (direction == 2) {
        int tmp = sgo[1][0];
        sgo[1][0] = sgo[1][1];
        sgo[1][1] = sgo[1][2];
        sgo[1][2] = sgo[3][1];
        sgo[3][1] = tmp;
    } else if (direction == 3) {
        int tmp = sgo[0][1];
        sgo[0][1] = sgo[1][1];
        sgo[1][1] = sgo[2][1];
        sgo[2][1] = sgo[3][1];
        sgo[3][1] = tmp;
    }else {
        int tmp = sgo[3][1];
        sgo[3][1] = sgo[2][1];
        sgo[2][1] = sgo[1][1];
        sgo[1][1] = sgo[0][1];
        sgo[0][1] = tmp;
    }
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m, t;
    cin >> n >> m >> pos.first >> pos.second >> t;
    vector<vector<int>> v;

    v.resize(n);
    for (auto &i: v) {
        i.resize(m);
        for (auto &j: i) {
            cin >> j;
        }
    }

    while (t--) {
        int di;
        cin >> di;
        pair<int, int> before = pos;
        pos = go(pos, di);

        if (pos.first < 0 || pos.first >= n || pos.second < 0 || pos.second >= m) {
            pos = before;
            continue;
        }

        turn(di);
        if (v[pos.first][pos.second] == 0) {
            v[pos.first][pos.second] = sgo[3][1];
        } else {
            sgo[3][1] = v[pos.first][pos.second];
            v[pos.first][pos.second] = 0;
        }

        cout << sgo[1][1] << "\n";
    }
}