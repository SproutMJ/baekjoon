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

    map<string, int> mp;
    while (n--) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        if (mp.count(s) == 0) {
            mp[s] = 1;
        }else{
            mp[s]++;
        }
    }

    cout << mp.size();
}