#include <iostream>
#include <queue>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    int x;
    cin >> x;
    if (n == 1) {
        cout << 0;
        return 0;
    }

    priority_queue<int> pq;
    n--;
    while (n--) {
        int a;
        cin >> a;

        pq.push(a);
    }

    int ans = 0;
    while (x <= pq.top()) {
        int a = pq.top();
        a--;
        pq.pop();
        pq.push(a);
        ans++;
        x++;
    }

    cout << ans;
}