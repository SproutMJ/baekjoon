#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int h, y;
    cin >> h >> y;

    vector<double> v(y + 1);
    v[0] = h;

    for (int i = 1; i <= y; i++) {
        if (i <= 2) {
            v[i] = (int)(v[i - 1] / 100 * 105);
            continue;
        }
        if (i <= 4) {
            v[i] = (int)(max(v[i - 1] / 100 * 105, v[i - 3] / 100 * 120));
            continue;
        }
        v[i] = (int)(max(v[i - 1] / 100 * 105, max(v[i - 3] / 100 * 120, v[i - 5] / 100 * 135)));
    }

    cout << (int) v[y];
}