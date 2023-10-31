#include <iostream>
#include <queue>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
    cin.tie(0);
    std::ios_base::sync_with_stdio(0);

    int n, num = 0, ans_num = 0;
    cin >> n;
    cin.ignore();

    vector<queue<string>> v(n);
    for (auto &i: v) {
        string s;
        getline(cin, s);
        stringstream sst(s);
        string token;
        while (sst >> token) {
            i.push(token);
            num++;
        }
    }

    string ans;
    getline(cin, ans);
    stringstream sst(ans);
    queue<string> q;
    string token;
    while (sst >> token) {
        q.push(token);
        ans_num++;
    }

    if (num != ans_num) {
        cout << "Impossible";
        return 0;
    }

    while (!q.empty()) {
        bool flag = false;
        for (int i = 0; i < v.size(); i++) {
            if (flag) {
                continue;
            }
            if (i + 1 == v.size() && v[i].front() != q.front()) {
                cout << "Impossible";
                return 0;
            } else if (v[i].front() == q.front()) {
                v[i].pop();
                q.pop();
                flag = true;
                continue;
            }
        }
    }
    cout << "Possible";
}