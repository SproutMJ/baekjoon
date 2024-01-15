#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    vector<int> v(n), vv(n);
    for (auto &i: v) {
        cin >> i;
    }
    for (int &i: vv) {
        cin >> i;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans+= abs(v[i] - vv[i]);
    }

    cout << ans/2;
}