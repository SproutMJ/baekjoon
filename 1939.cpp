#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
vector<pair<int, int>> adj[10001];
vector<bool> vis(10001);
int src, dst;
bool flag = false;
int gram;
void dfs(int n){
    vis[n] = true;

    if(n == dst){
        flag = true;
    }

    for(const auto &[npos, ncos]: adj[n]){
        if(vis[npos]){
            continue;
        }
        if(ncos<gram){
            continue;
        }

        dfs(npos);
    }
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    int maxv = 0;
    while(m--){
        int a, b, c;
        cin >> a >>b >>c;

        maxv = max(maxv, c);
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }

    maxv++;

    cin >> src>> dst;

    int minv = 0;
    while(minv <= maxv){
        int mid = (minv+maxv)/2;

        fill(vis.begin(), vis.begin() + n + 1, false);
        flag = false;
        gram = mid;

        dfs(src);
        if(flag){
            minv = mid+1;
        }else{
            maxv = mid-1;
        }
    }

    cout << maxv;
}