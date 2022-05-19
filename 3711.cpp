#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> v(n);
		
		for (auto& i : v)cin >> i;
		int ans = 1;
		while (true) {
			bool flag = false;
			unordered_map<int, bool> mp;
			for (const auto& i : v) {
				int key = i % ans;
				if (mp.find(key) != mp.end()) {
					ans++;
					flag = true;
					break;
				}
				mp.insert({ key, 1 });
			}
			if (flag == false) {
				cout << ans << "\n";
				break;
			}
		}
	}
}