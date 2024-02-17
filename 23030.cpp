#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    const int lim = 2147483647;
    vector<vector<int>> line(n + 1);
    vector<vector<vector<pair<int,int>>>> adj(n+1);
    for(int i = 1; i<=n; i++){
        int nn;
        cin >> nn;
        line[i].resize(nn + 1);
        adj[i].resize(nn+1);
    }

    int m;
    cin >> m;
    while(m--){
        int p, pp, q, qq;
        cin >> p >> pp >> q >> qq;

        adj[p][pp].push_back({q, qq});
        adj[q][qq].push_back({p, pp});
    }

    int t;
    cin >> t;
    while(t--){
        int tr, u, uu, v, vv;
        cin >>tr >> u >> uu >> v >> vv;
        for(int i = 1; i<=n; i++){
            fill(line[i].begin(), line[i].end(), lim);
        }

        line[u][uu] = 0;
        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<>> pq;
        pq.push({0, u, uu});
        while(!pq.empty()){
            auto [cost, ln, st] = pq.top();
            pq.pop();

            if(cost > line[ln][st]){
                continue;
            }

            int diff[2] = {-1, 1};
            for(const auto &d: diff){
                int vertex = st+d;
                if(vertex<=0 || vertex>=line[ln].size())
                    continue;
                if(line[ln][vertex] > cost+1){
                    line[ln][vertex] = cost+1;
                    pq.push({cost+1, ln, vertex});
                }
            }

            for(const auto &[trn, trst]: adj[ln][st]){
                if(line[trn][trst] > cost+tr){
                    line[trn][trst] = cost+tr;
                    pq.push({cost+tr, trn, trst});
                }
            }
        }

        cout << line[v][vv] << "\n";
    }
}