#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int v, e, p;
    cin >> v >> e >> p;
    const int inf = 987654321;

    vector<int> dis(v + 1, inf);
    vector<vector<pair<int, int>>> edge(v + 1, vector<pair<int, int>>());
    while(e--){
        int a, b, c;
        cin >> a >>b >>c;
        edge[a].push_back({b, c});
        edge[b].push_back({a, c});
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.push({0, 1});
    dis[1] = 0;
    while(!pq.empty()){
        auto [len, pos] = pq.top();
        pq.pop();

        if(len > dis[pos]){
            continue;
        }

        for(const auto &[npos, nlen] : edge[pos]){
            if(dis[npos] > len + nlen){
                dis[npos] = len + nlen;
                pq.push({dis[npos], npos});
            }
        }
    }

    vector<int> fdis(v + 1, inf);
    pq.push({0, p});
    fdis[p] = 0;
    while(!pq.empty()){
        auto [len, pos] = pq.top();
        pq.pop();

        if(len > fdis[pos]){
            continue;
        }

        for(const auto &[npos, nlen] : edge[pos]){
            if(fdis[npos] > len + nlen){
                fdis[npos] = len + nlen;
                pq.push({fdis[npos], npos});
            }
        }
    }

    if(dis[v] == dis[p] + fdis[v]){
        cout << "SAVE HIM";
    }else{
        cout << "GOOD BYE";
    }
}