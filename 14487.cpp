#include <iostream>
#include <queue>
#include <algorithm>
#include <numeric>

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

    int ans = accumulate(v.begin(), v.end(), 0);
    sort(v.begin(), v.end());
    cout << ans - v.back();
}