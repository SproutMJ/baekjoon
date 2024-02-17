#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
typedef pair<int,int> pii;
int n, m, h;
pii start;
int ans = 0;
vector<vector<int>> v;
vector<pii> milks;
vector<bool> vis;
void dfs(pii pos, int hp, int cnt){
  if(abs(pos.first - start.first) + abs(pos.second-start.second)<=hp)
        ans = max(ans, cnt);

    for(int i = 0; i<milks.size(); i++){
        if(vis[i] == false){
            int diff = abs(pos.first - milks[i].first) + abs(pos.second-milks[i].second);
            if(diff>hp) {
                continue;
            }

            vis[i] = true;
            dfs(milks[i],hp-diff+h, cnt+1);
            vis[i] = false;
        }
    }
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    cin >> n >> m >> h;
    v.resize(n, vector<int>(n));
    vis.resize(n, false);

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin >> v[i][j];
            if(v[i][j] == 1)
                start = {i,j};
            if(v[i][j] == 2)
                milks.push_back({i,j});
        }
    }

    dfs(start, m, 0);
    cout << ans;
}