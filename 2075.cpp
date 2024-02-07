#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<>> pq;
    for (int j = 0; j < n; j++) {
        int a;
        cin >> a;
        pq.push(a);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            pq.push(a);
        }
        for (int j = 0; j < n; j++) {
            pq.pop();
        }
    }

    cout << pq.top();
}