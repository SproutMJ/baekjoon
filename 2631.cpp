#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i: v) {
        cin >> i;
    }

    vector<int> dp(n, 1);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if(v[j] < v[i]){
                dp[i] = max(dp[j] + 1, dp[i]);
            }
        }
    }

    cout << n - *max_element(dp.begin(), dp.end());
}