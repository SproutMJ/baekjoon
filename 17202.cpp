#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int dp[15][16];
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);
    string a,b;
    cin>>a>>b;

    for (int i=0; i<a.length(); i++){
        dp[0][i*2] = a[i]-'0';
        dp[0][i*2+1] = b[i]-'0';
    }

    for (int i = 1; i<a.length()*2-1; i++)
        for (int j = 0; j<a.length()*2-i; j++){
            dp[i][j] = (dp[i-1][j]+dp[i-1][j+1])%10;
        }
    cout << dp[a.length()*2-2][0] << dp[a.length()*2-2][1];
}