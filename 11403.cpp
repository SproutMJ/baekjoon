#include <iostream>
#include <queue>
#include <algorithm>
#include <limits>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    vector<vector<int>> v(n, vector<int>(n));
    for (auto &i: v) {
        for (auto &j: i) {
            cin >> j;
        }
    }

    const int limit = numeric_limits<int>::max() / 2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(v[i][j] == 0){
                v[i][j] = limit;
            }
        }
    }

    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (v[i][j] > v[i][k] + v[k][j]) {
                    v[i][j] = v[i][k] + v[k][j];
                }
            }
        }
    }

    for (auto &i: v) {
        for (auto &j: i) {
            if(j == limit) cout << 0;
            else cout << 1;
            cout << " ";
        }
        cout << "\n";
    }
}