#include <iostream>
#include <queue>
#include <algorithm>
#include<set>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, k;
    cin >> n >> k;
    vector<long long> v(n);
    priority_queue<long long, vector<long long>, greater<>> pq;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        pq.push(v[i]);
    }

    long long before = 0;
    for(int i = 0; i<k; i++) {
        before = pq.top();
        pq.pop();


        for (const auto &vv: v) {
            pq.push(before * vv);
            if(before % vv == 0){
                break;
            }
        }
    }

    cout << before;
}