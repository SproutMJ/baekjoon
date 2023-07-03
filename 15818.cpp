#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    long long n, m, ans = 1;
    cin >> n >> m;

    vector <long long> v(n);

    for (auto& i : v)
        cin >> i;

    for (auto n : v) {
        ans *= (n % m);
        ans %= m;
    }

    cout << ans;
}