#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    int maxx = 0, ans = 0;
    for (int i = n; i >= 1; i--) {
        maxx = max(maxx, v[i]);
        ans = max(ans, maxx - v[i]);
    }

    cout << ans;
}