#include <iostream>
#include <map>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    int n, m;
    cin >> n >> m;

    map<string, int> mp;
    vector<string> v;

    while (n--) {
        string s;
        cin >> s;
        if (s.length() >= m) {
            if (mp.find(s) == mp.end()) {
                mp[s] = 1;
                v.push_back(s);
            } else {
                mp[s]++;
            }
        }
    }

    for_each(v.begin(), v.end(), [](string s)->void{});
}