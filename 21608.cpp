#include <iostream>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;

pair<int, int> diff[4] = {{-1, 0},
                          {1,  0},
                          {0,  -1},
                          {0,  1}};

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    vector<int> students;
    map<int, vector<int>> frends;
    for (int i = 0; i < n * n; i++) {
        int stu;
        cin >> stu;
        students.push_back(stu);

        vector<int> frend(4);
        for (auto &j: frend) {
            cin >> j;
        }

        frends[stu] = frend;
    }

    struct stand {
        int x;
        int y;
        int fav;
        int none;
    };
    vector<vector<int> > clas(n, vector<int>(n, 0));
    for (const auto &stu: students) {
        vector<stand> v;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (clas[i][j] != 0) {
                    continue;
                }

                stand count;
                count.x = i;
                count.y = j;
                count.fav = 0;
                count.none = 0;
                for (const auto &dif: diff) {
                    int x = i + dif.first;
                    int y = j + dif.second;
                    if (x < 0 || x >= n || y < 0 || y >= n) {
                        continue;
                    }

                    if (clas[x][y] == 0) {
                        count.none++;
                    } else if (find(begin(frends[stu]), end(frends[stu]), clas[x][y]) != end(frends[stu])) {
                        count.fav++;
                    }
                }
                v.push_back(count);
            }
        }

        sort(v.begin(), v.end(), [](stand l, stand r) -> bool {
            if (l.fav == r.fav) {
                if (l.none == r.none) {
                    if (l.x == r.x) {
                        if (l.y == r.y) {
                            return true;
                        } else if (l.y > r.y) {
                            return true;
                        }else {
                            return false;
                        }
                    } else if (l.x > r.x) {
                        return true;
                    }else {
                        return false;
                    }
                } else if (l.none < r.none) {
                    return true;
                }else {
                    return false;
                }
            } else if (l.fav < r.fav) {
                return true;
            }else {
                return false;
            }
        });

        clas[v.back().x][v.back().y] = stu;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            int fav = 0;
            for (const auto &dif: diff) {
                int x = i + dif.first;
                int y = j + dif.second;
                if (x < 0 || x >= n || y < 0 || y >= n) {
                    continue;
                }

                if(find(begin(frends[clas[i][j]]), end(frends[clas[i][j]]), clas[x][y]) != end(frends[clas[i][j]])) {
                    fav++;
                }

            }
            if(fav == 0) ans += 0;
            else if(fav == 1)ans += 1;
            else if(fav == 2) ans += 10;
            else if(fav == 3)ans += 100;
            else ans += 1000;
        }
    }

    cout << ans;
}