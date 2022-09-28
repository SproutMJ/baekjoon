#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
const int maxx = 1000000+1;
vector<int> e[maxx];
bool vied[maxx];
int dp[maxx][2];

void dfs(int n){
    vied[n] = 1;
    dp[n][0] = 1;

    for (const auto &i : e[n]){
        if(vied[i])continue;
        dfs(i);

        dp[n][0] += min(dp[i][0], dp[i][1]);
        dp[n][1] += dp[i][0];
    }

}
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >>n;
    for (int i = 0; i<n-1; i++){
        int u, v;
        cin >> u >> v;
        e[u].push_back(v);
        e[v].push_back(u);
    }
    dfs(1);
    cout << min(dp[1][1], dp[1][0]);
}