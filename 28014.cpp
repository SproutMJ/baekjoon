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

    int before = v.front();
    int ans = 1;
    for (int i = 1; i < v.size(); i++) {
        if (before > v[i]) {
            before = v[i];
            continue;
        }
        before = v[i];
        ans++;
    }

    cout << ans;
}