#include <iostream>
#include <queue>
#include <algorithm>
#include <tuple>
#include <map>
using namespace std;

int v, e;
const long long limit = 9000000000000000000;
const long long inf = 9000000000000000000;
vector<vector<pair<long long, long long>>> edge;
vector<long long> fun(int s){
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> pq;
    vector<long long> dis(v+1, limit);
    dis[s] = 0;
    pq.push({0, s});
    while(!pq.empty()){
        long long len, pos;
        tie(len, pos) = pq.top();
        pq.pop();

        if(len > dis[pos]){
            continue;
        }

        long long nlen, npos;
        for(const auto &e : edge[pos]){
            tie(npos, nlen) = e;
            if(dis[npos] > len + nlen){
                dis[npos] = len + nlen;
                pq.push({dis[npos], npos});
            }
        }
    }
    return dis;
}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    cin >> v >> e;

    vector<vector<long long>> tmp(v + 1, vector<long long>(v + 1, inf));
    while(e--){
        long long a, b, c;
        cin >> a >> b >>c;
        tmp[a][b] = min(tmp[a][b], c);
        tmp[b][a] = min(tmp[b][a], c);
    }

    edge.resize(v + 1, vector<pair<long long, long long>>());
    for(int i = 1; i<=v; i++){
        for(int j = 1; j<=v; j++){
            if(tmp[i][j] != inf){
                edge[i].push_back({j,tmp[i][j]});
            }
        }
    }

    vector<int> yaku(10);
    for(auto &i :yaku){
        cin >> i;
    }

    int s;
    cin >> s;

    vector<long long> my = fun(s);
    int start = yaku[0];
    map<pair<int, int>, long long> cache;
    int ans = 2147483647;
    long long time = 0;
    for(int i = 0; i<10; i++){
        if(cache.count({start, yaku[i]}) == 0){
            vector<long long> dis = fun(start);
            cache[{start, yaku[i]}] = dis[yaku[i]];
        }

        long long yakudis = cache[{start, yaku[i]}];
        if(yakudis == limit){
            continue;
        }
        time+=yakudis;
        if(my[yaku[i]] <= time){
            ans = min(ans, yaku[i]);
        }
        start = yaku[i];
    }

    if(ans == 2147483647){
        cout << -1;
    }else{
        cout << ans;
    }
}