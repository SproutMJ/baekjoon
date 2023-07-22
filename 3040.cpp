#include <iostream>
#include <queue>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    vector<int> v(9);
    for (auto &i: v) {
        cin >> i;
    }

    int sum = accumulate(v.begin(), v.end(), 0);
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - v[i] - v[j] == 100) {
                for (int k = 0; k < 9; k++) {
                    if (k != i && k != j) {
                        cout << v[k] << "\n";
                    }
                }
            }
        }
    }
}