#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<string> v(n);

    int sum = 0;
    for (auto &i: v) {
        cin >> i;
        for (const auto &j: i) {
            if (j == 'P') {
                sum++;
            }
        }
    }

    cout << ((sum == c * d) ? 0 : 1);
}