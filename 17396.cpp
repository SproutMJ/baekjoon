#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >>m;
    vector<int> visable(n);
    for(auto &i : visable)
        cin >> i;
    visable[n-1] = 0;

    vector<vector<pair<int, long long>>> adj(n);
    while(m--){
        int a, b, c;
        cin >> a >>b >>c;
        if(visable[a] == 1 || visable[b] == 1)
            continue;
        adj[a].push_back({b,c});
        adj[b].push_back({a,c});
    }

    const long long lim = 9000000000000000000;
    vector<long long> dis(n, lim);
    dis[0] = 0;
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> pq;
    pq.push({0,0});
    while(!pq.empty()){
        auto [cost, now] = pq.top();
        pq.pop();

        if(cost>dis[now])
            continue;

        for(const auto &[nxt, ncos]: adj[now]){
            if(visable[nxt])
                continue;
            if(dis[nxt]>ncos+cost){
                dis[nxt]=ncos+cost;
                pq.push({dis[nxt], nxt});
            }
        }
    }

    cout << ((dis[n-1]==lim)?-1:dis[n-1]);
}