#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    int cn = n-1;
    vector<vector<int>> adj(n+1);
    while(cn--){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> depth(n+1);
    vector<int> paren(n+1);
    queue<pair<int, int>> q;
    vector<bool> vis(n+1, false);
    q.push({1, 0});
    vis[1] = true;
    depth[1] = 0;
    paren[1] = 1;
    while(!q.empty()){
        auto [now, dep] = q.front();
        q.pop();

        for(const auto &e: adj[now]){
            if(vis[e]){
                continue;
            }

            depth[e] = dep+1;
            paren[e] = now;
            vis[e] = true;
            q.push({e, dep+1});
        }
    }

    int m;
    cin >> m;
    while(m--){
        int a, b;
        cin >> a >>b;
        fill(vis.begin(), vis.end(), false);
        if(depth[b]>depth[a]){
            a^=b;
            b^=a;
            a^=b;
        }

        while(a != paren[a]){
            vis[a] = true;
            a = paren[a];
        }
        vis[1] = true;

        while(vis[b] != true){
            b = paren[b];
        }

        cout << b << "\n";
    }
}