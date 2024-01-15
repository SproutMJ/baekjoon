#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    vector<int> plug(n, 0), seq(m);
    for (auto &i: seq) {
        cin >> i;
    }

    int ans = 0;
    for (int now = 0; now<m; now++) {
        bool flag = false;
        for (int i = 0; i < n; i++) {
            if (plug[i] == seq[now]) {
                flag = true;
                break;
            }
        }
        if (flag) {
            continue;
        }

        for (int i = 0; i < n; i++) {
            if (plug[i] == 0) {
                plug[i] = seq[now];
                flag = true;
                break;
            }
        }
        if (flag) {
            continue;
        }

        pair<int, int> target = {0, 0};
        for (int i = 0; i<n; i++) {
            int tmp = 987654321;
            for (int j = now + 1; j < m; j++) {
                if(plug[i] == seq[j]) {
                    tmp = j;
                    break;
                }
            }
            if (target.second < tmp) {
                target = {i, tmp};
            }
        }
        plug[target.first] = seq[now];
        ans++;
    }

    cout << ans;
}