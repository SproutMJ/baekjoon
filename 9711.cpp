#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
unsigned long long dp[10001];
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    dp[1] = 1;
    int n;
    cin >> n;
    for (int i=1; i<=n; i++){
        unsigned long long p,q;
        cin >> p>>q;

        for (int j = 2; j<=p; j++)
            dp[j] = (dp[j-1]+dp[j-2])%q;
        cout << "Case #" << i << ": " << dp[p]%q << "\n";
    }
}