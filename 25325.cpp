#include <iostream>
#include <queue>
#include <algorithm>
#include <sstream>
#include <map>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    vector<string> v(n);
    for (auto &s: v) {
        cin >> s;
    }

    cin.ignore();
    map<string, int> mp;
    while (n--) {
        string input;
        getline(cin, input);
        stringstream sst(input);
        string name;
        while (sst >> name) {
            if (mp.count(name) == 0) {
                mp[name] = 1;
            } else {
                mp[name]++;
            }
        }
    }

    sort(v.begin(), v.end(), [&](const string &l, const string &r)->bool {
        if (mp[l] != mp[r]) {
            return mp[l] > mp[r];
        } else {
            return l < r;
        }
    });

    for_each(v.begin(), v.end(), [&](const string &s)->void {
        cout << s << " " << mp[s] << "\n";
    });
}