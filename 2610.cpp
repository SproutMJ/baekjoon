#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    int lim = 2147483647/2;
    vector<vector<int>> bod(n+1, vector<int>(n+1, lim));
    vector<vector<int>> edge(n+1, vector<int>());
    for(int i = 1; i<=n; i++){
        bod[i][i] = 0;
    }

    while(m--){
        int a, b;
        cin >> a >>b;
        bod[a][b] = 1;
        bod[b][a] = 1;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }

    for(int k = 1; k<=n; k++){
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=n; j++){
                if(bod[i][j] > bod[i][k] + bod[k][j]){
                    bod[i][j] = bod[i][k] + bod[k][j];
                }
            }
        }
    }

    vector<int> ans;
    vector<bool> vis(n+1, false);
    for(int i = 1; i<=n; i++){
        if(vis[i] == false){
            int compo = 987654321;
            int val;
            queue<int> q;
            q.push(i);
            vis[i] = true;

            while(!q.empty()){
                int now = q.front();
                q.pop();
                int tmp = 0;
                for(int x = 1; x<=n; x++){
                    if(bod[now][x] != lim && now != x){
                        tmp = max(tmp, bod[now][x]);
                    }
                }
                if(compo > tmp){
                    val = now;
                    compo = tmp;
                }

                for(const auto &e : edge[now]){
                    if(vis[e] == false){
                        vis[e] = true;
                        q.push(e);
                    }
                }
            }

            ans.push_back(val);
        }
    }

    cout << ans.size() << "\n";
    sort(ans.begin(), ans.end());
    for(const auto &i: ans){
        cout << i << "\n";
    }
}