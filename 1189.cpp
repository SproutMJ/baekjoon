#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
int r, c, k;
vector<string> bod;
int ans = 0;
bool vis[5][5];
void dfs(int rr, int cc, int cnt){
    if(rr == 0 && cc == c-1){
        if(cnt == k){
            ans++;
        }
        return;
    }
    if(cnt>k)
        return;

    pair<int, int> diff[4] = {{-1, 0}, {1, 0}, {0, 1}, {0,-1}};
    for(const auto &d: diff){
        int rd = rr+d.first;
        int cd = cc+d.second;
        if(rd<0||rd>=r || cd<0||cd>=c)
            continue;
        if(bod[rd][cd] == 'T')
            continue;
        if(vis[rd][cd])
            continue;
        vis[rd][cd] = true;
        dfs(rd,cd,cnt+1);
        vis[rd][cd] = false;
    }
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    cin >> r >> c >> k;
    for(int i = 0; i<r; i++){
        string s;
        bod.push_back(s);
    }
    for(int i = 0; i<5; i++){
        for(int j=0; j<5; j++){
            vis[i][j] = false;
        }
    }

    vis[r-1][0] = true;
    dfs(r-1, 0,1);
    cout << ans;
}