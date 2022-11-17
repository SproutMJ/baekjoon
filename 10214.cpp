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
        int n = 9, y, k;
        y = k = 0;
        while (n--) {
            int a, b;
            cin >> a >> b;
            y += a;
            k += b;
        }

        if (y == k)cout << "Draw\n";
        else if (y > k)cout << "Yonsei\n";
        else cout << "Korea\n";
    }
}