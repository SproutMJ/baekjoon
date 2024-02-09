#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, int>>> edge(n+1, vector<pair<int, int>>());
    while(m--){
        int a, b, c;
        cin >> a >>b >> c;
        edge[a].push_back({b, c});
        edge[b].push_back({a, c});
    }

    int lim = (1<<31)-1;
    vector<int> dis(n+1, lim);
    dis[1] = 0;
    vector<int> prev(n+1, -1);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.push({1, 0});
    while(!pq.empty()){
        auto [pos, cost] = pq.top();
        pq.pop();

        if(cost > dis[pos]){
            continue;
        }

        for(const auto &e: edge[pos]){
            if(dis[e.first] > cost + e.second){
                dis[e.first] = cost + e.second;
                pq.push({e.first, dis[e.first]});
                prev[e.first] = pos;
            }
        }
    }

    vector<pair<int, int>> ans;
    for(int i = 1; i<=n; i++){
        if(prev[i] != -1){
            ans.push_back({i, prev[i]});
        }
    }
    cout << ans.size() << "\n";
    for(const auto &a: ans){
        cout << a.first << " " << a.second << "\n";
    }
}