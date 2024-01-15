#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    vector<int> v(n), dp(n + 1, 0);
    for (auto &i: v) {
        cin >> i;
    }

    for (const auto &i: v) {
        dp[i] = dp[i - 1] + 1;
    }

    cout << n - *max_element(dp.begin(), dp.end());
}