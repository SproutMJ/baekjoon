#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
typedef pair<int, int> pii;
pii ds[1001][1001];
int siz[1001][1001];
bool vis[1001][1001];
int n, k;

pii find(pii a) {
    if (a == ds[a.first][a.second]) {
        return a;
    }
    return ds[a.first][a.second] = find(ds[a.first][a.second]);
}

bool unite(pii a, pii b) {
    a = find(a);
    b = find(b);

    if (a == b){
        return false;
    }

    if (siz[a.first][a.second] < siz[b.first][b.second]) {
        ds[a.first][a.second] = b;
        siz[b.first][b.second] += (siz[a.first][a.second] == 0? 1: siz[a.first][a.second]);
    } else {
        ds[b.first][b.second] = a;
        siz[a.first][a.second] += (siz[b.first][b.second] == 0? 1: siz[b.first][b.second]);
    }
    return true;
}

queue<pii> q;
queue<pii> qq;
const pii diff[4] = {{-1, 0},
               {1,  0},
               {0,  -1},
               {0,  1}};
void add(){
    while (!q.empty()){
        auto [r, c] = q.front();
        qq.push({r, c});
        q.pop();

        for (const auto &d: diff) {
            int rr = r + d.first;
            int cc = c + d.second;
            if (rr <= 0 || rr > n || cc <= 0 || cc > n) {
                continue;
            }
            if (vis[rr][cc] && unite({r, c}, {rr, cc})) {
                k--;
            }
        }
    }
}

void diffuse(){
    while (!qq.empty()){
        auto [r, c] = qq.front();
        qq.pop();

        for (const auto &d: diff) {
            int rr = r + d.first;
            int cc = c + d.second;

            if (rr <= 0 || rr > n || cc <= 0 || cc > n) {
                continue;
            }
            if(vis[rr][cc] == false) {
                ds[rr][cc] = ds[r][c];
                vis[rr][cc] = true;
                q.push({rr, cc});
            }
        }
    }
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            ds[i][j] = {i, j};
            siz[i][j] = 0;
            vis[i][j] = false;
        }
    }

    vector<pii> first;

    int t = k;
    while (t--) {
        int a, b;
        cin >> a >> b;
        ds[a][b] = {a, b};
        q.push({a, b});
        vis[a][b] = true;
        siz[a][b] = 1;
    }

    int ans = 0;
    while(true){
        add();
        if(k == 1){
            cout << ans;
            return 0;
        }
        diffuse();
        ans++;
    }
}