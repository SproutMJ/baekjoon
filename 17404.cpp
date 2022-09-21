#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int n, ans = 98765432;
const int MAX = 98765432;
int cost[1001][3];
int dp[1001][3];
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    cin >>n;
    for (int i= 1; i<=n; i++)
        cin >> cost[i][0] >> cost[i][1] >> cost[i][2];


    for (int i = 0; i<3; i++){
        for (int k = 0; k<3; k++){
            if(i == k)dp[1][k] = cost[1][k];
            else dp[1][k] = MAX;
        }

        for (int k = 2; k <=n; k++){
            dp[k][0] = cost[k][0] + min(dp[k - 1][1], dp[k - 1][2]);
            dp[k][1] = cost[k][1] + min(dp[k - 1][0], dp[k - 1][2]);
            dp[k][2] = cost[k][2] + min(dp[k - 1][1], dp[k - 1][0]);
        }

        for (int k = 0; k<3; k++){
            if(i == k)continue;
            else ans = min(ans, dp[n][k]);
        }
    }

    cout << ans;

}