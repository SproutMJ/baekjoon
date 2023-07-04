#include <iostream>
#include <queue>
#include <algorithm>
#include "vector"

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);


    int n, m;
    cin >> n >> m;
    vector<int> v(n + 1, 0);

    while (m--) {
        int i, j, k;
        cin >> i >> j >> k;
        for_each(v.begin() + i, v.begin() + j + 1, [&k](int &a) { a = k; });
    }

    for (int i = 1; i <= n; i++) {
        cout << v[i] << " ";
    }
}