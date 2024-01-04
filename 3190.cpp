#include <iostream>
#include <queue>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

char dd[] = {'n', 'e', 's', 'w'};

int f(char now, char d){
    if (d == 'L') {
        now--;
        if (now == -1) {
            return 3;
        }
        return now;
    }

    now++;
    if (now == 4) {
        return 0;
    }
    return now;
}

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    deque<pair<int, int>> dq;

    set<pair<int, int>> app;
    int k;
    cin >> k;
    while (k--) {
        int x, y;
        cin >> x >> y;
        app.insert({x, y});
    }

    int ans = 0;
    map<int, char> turn;
    int l;
    cin >> l;
    while (l--) {
        int x;
        char c;
        cin >> x >> c;
        turn[x] = c;
    }

    int d = 1;
    dq.push_front({1, 1});
    while (true) {
        pair<int, int> head = dq.front();

        if (turn.count(ans) != 0) {
            d = f(d, turn[ans]);
        }

        if (d == 1) {
            head.second++;
        }else if(d == 2){
            head.first++;
        } else if (d == 3) {
            head.second--;
        }else{
            head.first--;
        }

        if (find(dq.begin(), dq.end(), head) != dq.end() || (head.first < 1 || n < head.first) ||
            (head.second < 1 || n < head.second)) {
            break;
        }

        ans++;
        if (app.count(head) != 0) {
            app.erase(head);
            dq.push_front(head);
        } else {
            dq.push_front(head);
            dq.pop_back();
        }
    }

    cout << ans + 1;
}
