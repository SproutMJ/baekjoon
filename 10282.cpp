#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int t;
    cin >> t;
    while(t--){
        int n, d, c;
        cin >> n >> d >> c;

        vector<vector<pair<int, int>>> edge(n + 1, vector<pair<int, int>>());
        while(d--){
            int i, j, k;
            cin >> i >> j >> k;
            edge[j].push_back({i, k});
        }

        const int limit = 2147483647;
        vector<int> dis(n + 1, limit);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
        dis[c] = 0;
        pq.push({0, c});
        while(!pq.empty()){
            auto [len, pos] = pq.top();
            pq.pop();

//            if(len > dis[pos]){
//                continue;
//            }

            for(const auto &[npos, nlen] : edge[pos]){
                if(dis[npos] > len + nlen){
                    dis[npos] = len + nlen;
                    pq.push({dis[npos], npos});
                }
            }
        }

        int ans = 0, sum = 0;
        for(int i = 1; i<=n; i++){
            if(dis[i] != limit){
                ans++;
                sum=max(sum, dis[i]);
            }
        }

        cout << ans << " " << sum << "\n";
    }
}