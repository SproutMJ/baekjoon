#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;


int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    pair<int, int> pos;
    int di;
    cin >> n >> m >> pos.first >> pos.second >> di;

    vector<vector<int>> v(n);

    for (auto &i: v) {
        i.resize(m);
        for (auto &j: i) {
            cin >> j;
        }
    }

    int ans = 0;
    while (true) {
        if (v[pos.first][pos.second] == 0) {
            v[pos.first][pos.second] = -1;
            ans++;
            continue;
        }

        if (!(v[pos.first + 1][pos.second] == 0 || v[pos.first - 1][pos.second] == 0 ||
            v[pos.first][pos.second + 1] == 0 || v[pos.first][pos.second - 1] == 0)){
            if (di == 0) {
                pos.first++;
            } else if (di == 1) {
                pos.second--;
            } else if (di == 2) {
                pos.first--;
            } else {
                pos.second++;
            }

            if (v[pos.first][pos.second] == 1) {
                break;
            }
        }else{
            for(int i = 0; i<4; i++){
                di--;
                if(di<0) {
                    di = 3;
                }

                pair<int, int> before = pos;
                if (di == 0) {
                    pos.first--;
                } else if (di == 1) {
                    pos.second++;
                } else if (di == 2) {
                    pos.first++;
                } else {
                    pos.second--;
                }

                if (v[pos.first][pos.second] == 0) {
                    break;
                }else {
                    pos = before;
                }
            }
        }
    }

    cout << ans;
}