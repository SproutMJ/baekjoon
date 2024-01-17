#include <iostream>
#include <queue>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int t;
    cin >> t;
    while (t--) {
        priority_queue<int> maxq;
        priority_queue<int, vector<int>, greater<>> minq;
        map<int, int> mp;
        int k;
        cin >> k;
        while (k--) {
            char n;
            int i;
            cin >> n >> i;
            if (n == 'I') {
                maxq.push(i);
                minq.push(i);
                if(mp.find(i) == mp.end()){
                    mp[i] = 1;
                }else{
                    mp[i]++;
                }
            }else{
                if (i == 1) {
                    while (!maxq.empty()) {
                        if(mp[maxq.top()] > 0){
                            mp[maxq.top()]--;
                            maxq.pop();
                            break;
                        }
                        maxq.pop();
                    }
                }else{
                    while (!minq.empty()) {
                        if(mp[minq.top()] > 0){
                            mp[minq.top()]--;
                            minq.pop();
                            break;
                        }
                        minq.pop();
                    }
                };
            }
        }

        int flag = 0;
        pair<int, int> ans = {0, 0};
        while (!minq.empty()) {
            if (mp[minq.top()] > 0) {
                ans.first = minq.top();
                flag++;
                break;
            }
            minq.pop();
        }
        while (!maxq.empty()) {
            if (mp[maxq.top()] > 0) {
                flag++;
                ans.second = maxq.top();
                break;
            }
            maxq.pop();
        }
        if (flag != 2) {
            cout << "EMPTY" << "\n";
        }else{
            cout << ans.second << " " << ans.first << "\n";
        }
    }
}