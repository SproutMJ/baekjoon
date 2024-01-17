#include <iostream>
#include <queue>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    priority_queue<pair<int, int>, vector<pair<int, int>>> maxq;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> minq;
    map<pair<int, int>, int> mp;

    int n;
    cin >> n;
    while (n--) {
        int p, l;
        cin >> p >> l;
        maxq.push({l, p});
        minq.push({l, p});
        if(mp.find({l, p}) == mp.end()){
            mp[{l, p}] = 1;
        }else{
            mp[{l, p}]++;
        }
    }

    int m;
    cin >> m;
    while (m--) {
        string f;
        cin >> f;
        if (f == "add") {
            int p, l;
            cin >> p >> l;
            maxq.push({l, p});
            minq.push({l, p});
            if(mp.find({l, p}) == mp.end()){
                mp[{l, p}] = 1;
            }else{
                mp[{l, p}]++;
            }
        }else if(f == "recommend"){
            int x;
            cin >> x;
            if (x == 1) {
                while (!maxq.empty()) {
                    if (mp[maxq.top()] > 0) {
                        cout << maxq.top().second << "\n";
                        break;
                    }
                    maxq.pop();
                }
            }else{
                while (!minq.empty()) {
                    if (mp[minq.top()] > 0) {
                        cout << minq.top().second << "\n";
                        break;
                    }
                    minq.pop();
                }
            }
        }else{
            int p;
            cin >> p;
            for (int i = 1; i <= 100; i++) {
                if (mp[{i, p}] > 0) {
                    mp[{i, p}]--;
                    break;
                }
            }
        }
    }
}