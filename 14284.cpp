#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

typedef pair<int, int> pii;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    vector<vector<pii>> edge(n + 1, vector<pii>());
    while(m--){
        int a, b, c;
        cin >> a >> b >>c;
        edge[a].push_back({b, c});
        edge[b].push_back({a, c});
    }

    const int lim = 2147483647;
    vector<int> dis(n+1, lim);
    int s, e;
    cin >> s >> e;
    dis[s] = 0;
    priority_queue<pii, vector<pii>, greater<>> pq;
    pq.push({0, s});
    while(!pq.empty()){
        auto [len, pos] = pq.top();
        pq.pop();

        if(len>dis[pos]){
            continue;
        }

        for(const auto &[npos, nlen] : edge[pos]){
            if(dis[npos] > len + nlen){
                dis[npos] = len + nlen;
                pq.push({dis[npos], npos});
            }
        }
    }

    cout << dis[e];
}