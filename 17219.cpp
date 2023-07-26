#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

    int n,m;
    cin >> n >>m ;

    map<string, string> mp;
    while (n--) {
        string id, pass;
        cin >> id >>pass;
        mp.insert(make_pair(id, pass));
    }

    while (m--) {
        string id;
        cin >> id;
        cout << mp[id] << "\n";
    }
}