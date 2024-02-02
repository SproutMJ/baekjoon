#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    priority_queue<pair<int, int>> pq;
    while(n--){
        int a, b;
        cin >> a >>b;
        pq.push({b, a});
    }

    vector<bool> flag(1001, false);
    int ans = 0;
    while(!pq.empty()){
        auto [cost, day] = pq.top();
        pq.pop();

        for(int i = day; i>=1; i--){
            if(flag[i] == false){
                flag[i] = true;
                ans+=cost;
                break;
            }
        }
    }

    cout << ans;
}