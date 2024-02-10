#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;
    vector<int> ind(n+1, 0);
    vector<vector<int>> edge(n+1, vector<int>());
    while(m--){
        int e;
        cin >> e;
        vector<int> tmp(e);
        for(auto &i: tmp){
            cin >> i;
        }

        for(int i = 0; i<e-1; i++){
            int a = tmp[i];
            int b = tmp[i+1];

            edge[a].push_back(b);
            ind[b]++;
        }
    }

    queue<int> q;
    for(int i = 1; i<=n; i++){
        if(ind[i] == 0){
            q.push(i);
        }
    }

    vector<int> ans;
    for(int i = 0; i<n; i++){
        if(q.empty()){
            cout << 0;
            return 0;
        }

        int now  = q.front();
        q.pop();

        ans.push_back(now);

        for(const auto &e: edge[now]){
            ind[e]--;
            if(ind[e] == 0){
                q.push(e);
            }
        }
    }

    for(const auto &i: ans){
        cout << i << "\n";
    }
}