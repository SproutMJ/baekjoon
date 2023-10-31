#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    int t = 1;
    queue<int> q;

    for (int i = 1; i <= n; i++) {
        q.push(i);
    }

    while (q.size() > 1) {
        long long step = t * t;
        step *= t;
        t++;
        step--;
        step %= q.size();
        while(step--) {
            q.push(q.front());
            q.pop();
        }
        q.pop();
    }

    cout << q.front();
}