#include <iostream>
#include <queue>
#include <algorithm>
#include<limits>
using namespace std;
typedef pair<int, int> pii;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m, k;
    cin >>n >> m >>k;

    int s, t;
    cin >> s>>t;

    vector<vector<pii>> board(n+1, vector<pii>());
    while (m--){
        int a, b, c;
        cin >> a>>b>>c;
        board[a].emplace_back(b, c);
    }

    const int limit = numeric_limits<int>::max();
    priority_queue<pii, vector<pii>, greater<>> pq;
    vector<vector<int>> dist(n + 1, vector<int>(k, limit));
    dist[s][0] = 0;
    pq.emplace(0, s);

    while(!pq.empty()){
        pii cur = pq.top();
        pq.pop();

        if (cur.first > dist[cur.second][cur.first % k]) {
            continue;
        }

        for(const auto &city: board[cur.second]){
            int len = cur.first + city.second;
            if (dist[city.first][len%k] > len) {
                dist[city.first][len % k] = len;
                pq.push({len, city.first});
            }
        }
    }

    if (dist[t][0] == limit) {
        cout << "IMPOSSIBLE";
    }else{
        cout << dist[t][0];
    }
}