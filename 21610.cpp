#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int n;
vector<pair<int, int>> direction = {
        {0, 0},
        {0, -1},
        {-1, -1},
        {-1, 0},
        {-1, 1},
        {0, 1},
        {1, 1},
        {1, 0},
        {1, -1}
};

int correction(int num) {
    if(num==0){
        return n;
    }
    if (num < 0) {
        return num % n + n;
    }
    if (num > n) {
        if (num % n == 0) {
            return n;
        }
        return num % n;
    }
    return num;
}
vector<pair<int, int>> mov(vector<pair<int, int>> cloud, int di, int len) {
    vector<pair<int, int>> tmp;
    for (auto &i: cloud) {
        int r = correction(i.first + (len)*direction[di].first);
        int c = correction(i.second + (len)*direction[di].second);
        tmp.push_back({r, c });
    }

    return tmp;
}

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int m;
    cin >> n >> m;

    vector<vector<int>> water(n + 1, vector<int>(n + 1, 0));
    for (int i = 1; i<=n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> water[i][j];
        }
    }

    vector<pair<int, int>> cloud = {{n,     1},
                                    {n,     2},
                                    {n - 1, 1},
                                    {n - 1, 2}};


    while (m--) {
        int d, s;
        cin >> d >> s;
        vector<pair<int, int>> moving = mov(cloud, d, s);
        for (auto &i: moving) {
            water[i.first][i.second]++;
        }


        for (auto &i: moving) {
            int addwater = 0;
            for (int j = 2; j <= 8; j += 2) {
                int r = i.first + direction[j].first;
                int c = i.second + direction[j].second;

                if (r < 1 || r > n || c < 1 || c > n || water[r][c] == 0) {
                    continue;
                }

                addwater++;
            }

            water[i.first][i.second] += addwater;
        }

        cloud = vector<pair<int, int>>();
        for (int i = 1; i<=n; i++) {
            for (int j = 1; j <= n; j++) {
                if (water[i][j]>=2 && find(moving.begin(), moving.end(), make_pair(i,j)) == moving.end()) {
                    water[i][j] -= 2;
                    cloud.push_back({i, j});
                }
            }
        }
    }



    int ans = 0;
    for (const auto &i: water) {
        for (const auto &j: i) {
        ans += j;
        }
    }

    cout << ans;
}