#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
vector<int> a(201, -1), b(201, -1);
vector<int> adj[201];
vector<bool> vis(201, false);
bool dfs(int now){
    vis[now] = true;

    for(const auto &e: adj[now]){
        if(b[e] == -1 || vis[b[e]] == false&&dfs(b[e])){
            a[now] = e;
            b[e] = now;
            return true;
        }
    }
    return false;
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >>n >> m;
    for(int i = 1; i<=n; i++){
        int s;
        cin >> s;
        while(s--){
            int si;
            cin >> si;
            adj[i].push_back(si);
        }
    }

    int ans = 0;
    for(int i = 1; i<=n; i++){
        if(a[i] == -1){
            fill(vis.begin(), vis.end() , false);
            if(dfs(i)){
                ans++;
            }
        }
    }

    cout << ans;
}