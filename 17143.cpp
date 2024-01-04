#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int r, c, m;

struct shark {
    int s, d, z;

    shark() {
        this->s = 0;
        this->d = 0;
        this->z = 0;
    }
};

vector<vector<shark>> board(101, vector<shark>(101, shark()));
vector<vector<shark>> _board(101, vector<shark>(101, shark()));

tuple<int, int, int> move(shark shark, int i, int j) {
    if (shark.d == 1) {
        int s = shark.s;
        if (i - s >= 1) {
            return {i - s, j, shark.d};
        }

        s = (s - i + 1);
        if ((s / (r - 1)) % 2 == 0) {
            shark.d = 2;
            int row = s % (r - 1) + 1;
            return {row, j, shark.d};
        }

        int row = s % (r - 1) == 0 ? r : r - (s % (r - 1));
        return {row, j, shark.d};
    }
    if (shark.d == 2) {
        int s = shark.s;
        if (i + s <= r) {
            return {i + s, j, shark.d};
        }

        s = (s - (r - i));
        if ((s / (r - 1)) % 2 == 0) {
            shark.d = 1;
            int row = s % (r - 1) == 0 ? r : r - (s % (r - 1));
            return {row, j, shark.d};
        }

        int row;
        row = s % (r - 1) + 1;
        return {row, j, shark.d};
    }
    if (shark.d == 4) {
        int s = shark.s;
        if (j - s >= 1) {
            return {i, j - s, shark.d};
        }

        s = (s - j + 1);
        if ((s / (c - 1)) % 2 == 0) {
            shark.d = 3;
            int col = s % (c - 1) + 1;
            return {i, col, shark.d};
        }

        int col;
        col = s % (c - 1) == 0 ? c : c - (s % (c - 1));
        return {i, col, shark.d};
    }
    if (shark.d == 3) {
        int s = shark.s;
        if (j + s <= c) {
            return {i, j + s, shark.d};
        }

        s = (s - (c - j));
        if ((s / (c - 1)) % 2 == 0) {
            shark.d = 4;
            int col = s % (c - 1) == 0 ? c : c - (s % (c - 1));
            return {i, col, shark.d};
        }

        int col;
        col = s % (c - 1) + 1;
        return {i, col, shark.d};
    }
}

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);
//
//    r = 6; c = 6;
//    for (int s = 1; s <= 15; s++) {
//        shark shark;
//        shark.s = s;
//        shark.d = 2;
//        auto pos = move(shark, 3,3);
//        cout << pos.first << " " << pos.second << endl;
//    }

    cin >> r >> c >> m;

    while (m--) {
        int rr, cc;
        shark shark;
        cin >> rr >> cc >> shark.s >> shark.d >> shark.z;

        board[rr][cc] = shark;
    }

    int ans = 0;


    for (int f = 1; f <= c; f++) {
        for (int i = 1; i <= r; i++) {
            if (board[i][f].z != 0) {
                ans += board[i][f].z;
                board[i][f] = shark();
                break;
            }
        }

        for (int i = 1; i <= r; i++) {
            for (int j = 1; j <= c; j++) {
                _board[i][j] = shark();
            }
        }

        for (int i = 1; i <= r; i++) {
            for (int j = 1; j <= c; j++) {
                if (board[i][j].z != 0) {
                    auto tu = move(board[i][j], i, j);
                    if (_board[get<0>(tu)][get<1>(tu)].z < board[i][j].z) {
                        _board[get<0>(tu)][get<1>(tu)] = board[i][j];
                        _board[get<0>(tu)][get<1>(tu)].d = get<2>(tu);
                    }
                }
            }
        }

        for (int i = 1; i <= r; i++) {
            for (int j = 1; j <= c; j++) {
                board[i][j] = _board[i][j];
            }
        }
    }

    cout << ans;
}
