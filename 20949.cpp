#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	
	vector<pair<int, int>> v;
	for (int i = 1; i <= n; i++) {
		int w, h;
		cin >> w >> h;

		v.push_back({ i, w * w + h * h });
	}

	sort(v.begin(), v.end(), [](pair<int, int> l, pair<int, int> r)->bool {
		if (l.second == r.second) return l.first < r.first;
		else return l.second > r.second;
		});

	for (const auto& i : v)
		cout << i.first << "\n";
}