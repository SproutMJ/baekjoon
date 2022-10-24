#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
unsigned long long dp[31][31];
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int h, n;
    cin >> h >>n;

    for (int i=0; i<=30; i++)
        dp[0][i] = 1;

    for (int i = 1; i<=30; i++)
        for (int j = i; j<=30 ;j++)
                dp[i][j] = dp[i-1][j]+dp[i][j-1];

    cout << dp[abs(n-h)][abs(h-n)];
}