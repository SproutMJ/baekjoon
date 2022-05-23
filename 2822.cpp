#include <iostream>
#include <queue>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	vector<pair<int, int>> v(8);

	int n = 1;
	for (auto& i : v) {
		i.second = n++;
		cin >> i.first;
	}

	sort(v.begin(), v.end(), greater<pair<int, int>>());
	cout << accumulate(v.begin(), v.begin() + 5, 0, [](int val, pair<int, int> param)->int {
		return val + param.first;
		}) << "\n";
	v.erase(v.begin() + 5, v.end());
	sort(v.begin(), v.end(), [](pair<int, int> l, pair<int, int> r)->bool {
		return l.second < r.second;
		});
	for (const auto& i : v)cout << i.second << " ";
}