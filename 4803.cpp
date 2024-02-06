#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
vector<int> v[501];
vector<bool> vis(501, false);
int vn, en;
void dfs(int node){
    vis[node] = true;
    vn++;

    for(const auto &e: v[node]){
        en++;
        if(vis[e] == false){
            dfs(e);
        }
    }
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int c = 1;
    while(true){
        int n, m;
        cin >> n >> m;
        if(n == 0 && m == 0){
            break;
        }

        int ans;
        ans = vn = en = 0;
        for(int i = 1; i<=n; i++){
            v[i].clear();
            vis[i] = false;
        }

        while(m--){
            int a, b;
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }

        for(int i = 1; i<=n; i++){
            vn = en = 0;

            if(vis[i] == false){
                dfs(i);
            }

            if(vn-1 == en/2){
                ans++;
            }
        }

        cout << "Case " << c << ": ";
        c++;
        if(ans == 0){
            cout << "No trees.";
        }else if(ans == 1){
            cout << "There is one tree.";
        }else{
            cout << "A forest of " << ans << " trees.";
        }
        cout << "\n";
    }
}