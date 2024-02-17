#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n>>m;
    vector<tuple<int, int, long long>> adj;
    while(m--){
        int a, b, c;
        cin >> a >>b >>c;
        adj.push_back({a,b,c});
    }

    const long long lim = (1l<<63)-1;
    vector<long long> dis(n+1, lim);
    dis[1] = 0;

    bool flag = false;
    for(int i = 1; i<=n; i++){
        for(const auto &e: adj){
            auto [a,b,c] = e;
            if(dis[a] != lim && dis[b] > dis[a] + c){
                dis[b] = dis[a] + c;
                if(i == n) {
                    flag = true;
                    break;
                }
            }
        }
    }

    if(flag){
        cout << -1;
    }else{
        for(int i = 2; i<=n; i++){
            if(dis[i] == lim){
                cout << -1;
            }else{
                cout << dis[i];
            }
            cout << "\n";
        }
    }
}