#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    priority_queue<int, vector<int>, greater<>> pq;
    int n, ans = 0;
    cin >> n;
    while(n--){
        int c;
        cin >> c;
        pq.push(c);
    }

    while(pq.size()>=2){
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        ans+=(a+b);
        pq.push(a+b);
    }

    cout << ans;
}