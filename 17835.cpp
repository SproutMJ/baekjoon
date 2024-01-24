#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int n, m, k;
vector<pair<int, int>> edge[100001];
vector<int> meon;

int f(int s){
    if(find(meon.begin(), meon.end(), s) != meon.end()){
        return 0;
    }
    vector<int> dis(n + 1, 2147483647);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    dis[s] = 0;
    pq.push({0, s});

    while(!pq.empty()){
        pair<int, int> cur = pq.top();
        pq.pop();

        if(dis[cur.second] == 2147483647){
            continue;
        }

        for(const auto &e: edge[cur.second]){
            if(dis[e.first] > dis[cur.second] + e.second){
                dis[e.first] = dis[cur.second] + e.second;
                pq.push({dis[e.first], e.first});
            }
        }
    }

    int ans = 2147483647;
    for(const auto &k: meon){
        ans = min(ans, dis[k]);
    }

    return ans;
}

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    cin >> n >>m >>k;


    while (m--) {
        int a, b, c;
        cin >> a>>b >>c;

        edge[a].push_back({b, c});
    }

    while(k--){
        int x;
        cin >> x;
        meon.push_back(x);
    }

    int ans = 0;
    int dist = 0;
    for (int i = 1; i <= n; i++) {
        int tmp = f(i);
        if(tmp > dist){
            ans = i;
            dist = tmp;
        }
    }

    cout << ans << "\n" << dist;
}