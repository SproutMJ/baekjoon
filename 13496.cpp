#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        int n, s, d;
        cin >> n >> s >> d;

        int ans = 0;

        for (int j = 0, a, b; j < n; j++) {
            cin >> a >> b;
            if (s * d >= a) ans += b;
        }

        cout << "Data Set " << i << ":\n" << ans << '\n' << '\n';
    }
}