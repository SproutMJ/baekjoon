#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
vector<string> v;
vector<vector<bool>> vis;
bool flag = false;
int n, m;
void dfs(const int x, const int y, int r, int c, int cnt){
    vis[r][c] = true;
    if(flag){
        return;
    }

    pair<int, int> diff[4] = {{-1, 0}, {1, 0}, {0, -1}, {0,1}};
    for(const auto &d: diff){
        int rr = r+d.first;
        int cc = c+d.second;
        if(rr<0||rr>=n||cc<0||cc>=m){
            continue;
        }
        if(vis[rr][cc]) {
            if(cnt>=4 && x == rr && y == cc){
                flag = true;
                return;
            }

            continue;
        }
        if(v[r][c] == v[rr][cc]){
            dfs(x, y, rr,cc, cnt+1);
        }
    }
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    cin >> n >> m;
    v.resize(n);
    vis.resize(n, vector<bool>(m, false));
    for(auto &i : v){
        cin >> i;
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            fill(vis.begin(), vis.end(), vector<bool>(m, false));
            dfs(i, j, i, j,1);
            if(flag){
                cout << "Yes";
                return 0;
            }
        }
    }

    cout << "No";
}