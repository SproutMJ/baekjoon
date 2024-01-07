#include <iostream>
#include <queue>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for (auto &i: a) {
        cin >> i;
    }

    for (auto &i: b) {
        cin >> i;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());

    cout << inner_product(a.begin(), a.end(), b.begin(), 0);
}