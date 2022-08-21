#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for (auto &i: v)cin >> i;
    sort(v.begin(), v.end());
    cout << v[m - 1];
}