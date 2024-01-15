#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >>m;

    priority_queue<unsigned long long, vector<unsigned long long>, greater<>> pq;
    while (n--) {
        unsigned long long a;
        cin >> a;
        pq.push(a);
    }

    while (m--) {
        unsigned long long a = pq.top();
        pq.pop();
        unsigned long long b = pq.top();
        pq.pop();

        pq.push(a + b);
        pq.push(a + b);
    }

    unsigned long long ans = 0;
    while (!pq.empty()) {
        ans+=pq.top();
        pq.pop();
    }

    cout << ans;
}