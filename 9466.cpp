#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
int n, cnt;
bool vis[100000+1], fin[100000+1];
int want[100000+1];

void dfs(int node){
    vis[node] = true;

    int nxt = want[node];
    if(vis[nxt] == false){
        dfs(nxt);
    }else if(fin[nxt] == false){
        for(int i = nxt; i != node; i = want[i]){
            cnt++;
        }
        cnt++;
    }

    fin[node] = true;
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int t;
    cin >> t;

    while(t--){
        cin>>n;

        fill(vis, vis+n + 2, false);
        fill(fin, fin+n + 2, false);
        cnt = 0;

        for(int i = 1; i<=n; i++){
            cin >> want[i];
        }

        for(int i = 1; i<=n; i++){
            if(vis[i] == false){
                dfs(i);
            }
        }

        cout << n-cnt<< "\n";
    }
}