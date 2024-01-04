#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = 0;

        while (n--) {
            int input[3];
            for (auto &i: input) {
                cin >> i;
            }

            int m = 0;
            for (const auto &i: input) {
                if (i > 0) {
                    m = max(m, i);
                }
            }
            ans += m;
        }

        cout << ans << "\n";
    }
}