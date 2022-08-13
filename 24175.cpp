#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	while (1) {
		int n;
		cin >> n;
		if (!n)break;

		unordered_map<int, pair<int, int>> mp;
		while (n--) {
			int y;
			string name, medal;
			cin >> y >> name >> medal;

			if (mp.find(y) == mp.end()) {
				mp[y] = { 0,0 };
			}
			
			if (medal == "Gold") {
				mp[y].first++;
				mp[y].second++;
			}
			else {
				mp[y].second++;
			}
		}

		pair<int, int> gold = {9999, 0}, sum = {9999, 0};
		for (const auto& i : mp) {
			if (i.second.first == gold.second && i.first<gold.first) {
				gold.first = i.first;
				continue;
			}

			if (i.second.first > gold.second) {
				gold.first = i.first;
				gold.second = i.second.first;
			}
		}
		for (const auto& i : mp) {
			if (i.second.second > sum.second) {
				sum.first = i.first;
				sum.second = i.second.second;
				continue;
			}

			if (i.second.second == sum.second && i.first < sum.first) {
				sum.first = i.first;
			}
		}
		cout << gold.first << " " << sum.first << "\n";
	}
}