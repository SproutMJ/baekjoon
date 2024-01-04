#include <iostream>
#include <queue>
#include <algorithm>
#include <cmath>

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

    int main, sub;
    cin >> main >> sub;

    unsigned long long ans = 0;
    for (auto &i: v) {
        ans++;
        if (i > main) {
            i -= main;

            ans+= (int)ceil((double) i / sub);
        }
    }

    cout << ans;
}