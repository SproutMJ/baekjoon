#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
typedef pair<unsigned  long long, unsigned long long> pii;
int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    unsigned long long a, b;
    cin >> a >>b;

    queue<pii> q;
    q.push({a, 0});
    int ans = -1;
    while (!q.empty()) {
        pii cur = q.front();
        q.pop();

        if (cur.first == b) {
            ans = cur.second;
            break;
        }
        if (cur.first > b) {
            continue;
        }
        q.push({cur.first * 10 + 1, cur.second + 1});
        q.push({cur.first * 2, cur.second + 1});
    }

    if (ans == -1) {
        cout << -1;
    }else cout << ans + 1;
}