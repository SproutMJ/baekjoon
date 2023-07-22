#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int f(const vector<string> &v) {
    int ans = 0;
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].length(); j++) {
            if (j <= v[i].length() - 3 && v[i][j] == '>' && v[i][j + 1] == 'o' && v[i][j + 2] == '<') {
                ans++;
                continue;
            }
            if (i <= v.size() - 3 && v[i][j] == 'v' && v[i + 1][j] == 'o' && v[i + 2][j] == '^') {
                ans++;
            }
        }
    }
    return ans;
}

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        for (auto &i: v) {
            cin >> i;
        }
        cout << f(v) << "\n";
    }
}