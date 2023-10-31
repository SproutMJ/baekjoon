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
    for (auto &i: v) {
        cin >> i;
    }

    vector<string> ans;
    for (int i = 0; i < v.size(); i++) {
        string s = "";
        for (int j = 0; j < m; j++) {
            if (v[i][j] != '.')
                s += v[i][j];
            else if (v[i][v[i].length() - 1 - j] != '.')
                s += v[i][v[i].length() - 1 - j];
            else
                s += '.';
        }
        ans.push_back(s);
    }

    for (const auto &i: ans) {
        for (const auto &j: i) {
            cout << j;
        }
        cout << "\n";
    }
}