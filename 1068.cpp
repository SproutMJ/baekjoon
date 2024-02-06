#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
vector<int> p[51];
vector<bool> vis(51);
int ans = 0;
void dfs(int node){
    if(vis[node]){
        return;
    }
    vis[node] = true;

    bool flag = false;
    for(const auto &e: p[node]){
        if(vis[e] == false){
            flag = true;
            break;
        }
    }
    if(flag == false){
        ans++;
        return;
    }

    for(const auto &e: p[node]){
        if(vis[e] == false){
            dfs(e);
        }
    }
}

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    int root;
    for(int i = 0; i<n; i++){
        int parent;
        cin >> parent;
        if(parent == -1){
            root = i;
            continue;
        }
        p[parent].push_back(i);

    }

    int del;
    cin >> del;
    dfs(del);

    ans = 0;
    dfs(root);
    cout << ans;
}