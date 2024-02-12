#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
vector<int> adj[2002];
vector<int> hum(2002, -1),work(1001, -1);
vector<bool> vis(2002);

bool dfs(int h){
    vis[h] = true;

    for(const auto &w: adj[h]){
        if(work[w] == -1 || vis[work[w]] == false && dfs(work[w])){
            hum[h] = w;
            work[w] = h;
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
        int can;
        cin >> can;
        while(can--){
            int b;
            cin >> b;
            adj[i].push_back(b);
            adj[i+1000].push_back(b);
        }
    }

    int ans = 0;
    for(int i = 1; i<=n; i++){
        if(hum[i] == -1){
            fill(vis.begin(), vis.begin()+n+1, false);
            if(dfs(i)){
                ans++;
            }
        }

        if(hum[i+1000] == -1){
            fill(vis.begin()+1000, vis.begin()+1000+n+1, false);
            if(dfs(i+1000)){
                ans++;
            }
        }
    }

    cout << ans;
}