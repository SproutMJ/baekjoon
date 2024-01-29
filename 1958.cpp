#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int dp[101][101][101];
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    string a, b, c;
    cin >> a >>b >>c;
    fill(&dp[0][0][0], &dp[0][0][0] + 101*101*101, 0);

    int ans = 0;
    for(int i = 1; i<=a.size(); i++){
        for(int j = 1; j<=b.size(); j++){
            for(int k = 1; k<=c.size(); k++){
                if(a[i - 1] == b[j - 1]&&b[j - 1]==c[k - 1]){
                    dp[i][j][k] = dp[i-1][j-1][k-1] + 1;
                }else{
                    dp[i][j][k] = max({dp[i-1][j][k], dp[i][j-1][k], dp[i][j][k-1]});
                }
                ans = max(ans, dp[i][j][k]);
            }
        }
    }

    cout << ans;
}