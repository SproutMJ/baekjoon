#include <iostream>
#include <queue>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int r, c;
	cin >> r >> c;

	vector<string> v(r);
	for (auto& i : v)cin >> i;

	vector<pair<int, int>> p;
	unordered_map<int, int> mp;

	for (const auto& i : v) {
		string::const_iterator iter = find_if(i.begin(), i.end(), [](char ch)->bool {
			switch (ch) {
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
				return true;
			default:
				return false;
			}
			});

		if (iter != i.end()) {
			p.push_back({ *iter - '0', iter - i.begin() });
			if (mp.find(iter - i.begin()) != mp.end()) mp[iter - i.begin()] = 1;
			else mp[iter - i.begin()]++;
		}
	}

	sort(p.begin(), p.end());
	int maxx = (* max_element(mp.begin(), mp.end())).first;
	for (const auto& i : p) {
		int val = 0;
		for (int j = maxx; j > i.second; j--)
			val += mp[j];
		cout << val + 1 << "\n";
	}
		
}