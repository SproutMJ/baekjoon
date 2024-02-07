#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> ds(10000+1);
int find(int node){
    if(node == ds[node]){
        return node;
    }
    return ds[node] = find(ds[node]);
}

void unite(int a, int b){
    a = find(a);
    b = find(b);

    if(a== b){
        return;
    }
    ds[a] = b;
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m, k;
    cin >> n >>m >> k;
    for(int i = 1; i<=n; i++){
        ds[i] = i;
    }

    vector<int> money(n + 1);
    for(int i = 1; i<=n; i++){
        cin >> money[i];
    }

    while(m--){
        int a, b;
        cin >> a >> b;
        if(a>b){
            a^=b;
            b^=a;
            a^=b;
        }
        unite(a, b);
    }

    vector<bool> vis(n+1, false);
    int ans = 0;
    for(int i = 1; i<=n; i++){
        if(vis[i] == false){
            vis[i] = true;
            int tmp = money[i];
            for(int j = i+1; j<=n; j++){
                if(vis[j] == false && find(i) == find(j)){
                    tmp = min(tmp, money[j]);
                    vis[j] = true;
                }
            }
            ans+=tmp;
        }
    }

    if(ans<=k)
        cout << ans;
    else
        cout << "Oh no";
}