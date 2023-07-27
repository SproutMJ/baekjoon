#include <iostream>
#include <queue>
#include <algorithm>
#include <map>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    vector<string> v;
    map<string, int> mp;

    while (n--) {
        string w;
        cin >> w;

        if (mp.count(w) == 0) {
            mp[w] = 1;
            v.push_back(w);
        } else {
            mp[w]++;
        }
    }

    sort(v.begin(), v.end(), [&](const string &l, const string &r)->bool {
        if (mp[l] != mp[r]) {
            return mp[l] > mp[r];
        }
        return l > r;
    });

    cout << v.front() << " " << mp[v.front()];
}