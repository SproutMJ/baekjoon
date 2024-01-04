#include <iostream>
#include <vector>
#include <bitset>
using namespace std;
int t[16], p[16], dp[16];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> t[i] >> p[i];
    }

    int over = 0;
    for (int i = n; i > 0; i--) {
        over = i + t[i];
        if (over > n + 1) {
            dp[i] = dp[i + 1];
        } else {
            dp[i] = max(dp[i + 1], dp[over] + p[i]);
        }
    }

    cout << dp[1];
}