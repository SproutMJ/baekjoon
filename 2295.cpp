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

    sort(v.begin(), v.end());
    vector<int> adj;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            adj.push_back(v[i] + v[j]);
        }
    }
    sort(adj.begin(), adj.end());

    int ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        for (int j = i; j>=0; j--) {
            auto iter = lower_bound(adj.begin(), adj.end(), v[i] - v[j]);
            if (iter != v.end() && *iter == v[i] - v[j]) {
                ans = max(ans, v[i]);
            }
        }
    }

    cout << ans;
}