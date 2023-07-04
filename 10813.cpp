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
    vector<int> v(n + 1);
    int i = 0;
    generate(v.begin(), v.end(), [&i]()->int{return i++;});

    while (m--) {
        int i, j;
        cin >> i >> j;
        if(i == j) continue;

        v[i] ^= v[j];
        v[j] ^= v[i];
        v[i] ^= v[j];
    }

    for (int i = 1; i <= n; i++) {
        cout << v[i] << " ";
    }
}