#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	vector<int> v(n);
	for (auto& i : v)cin >> i;

	int idx = 0, ans = 0;
	for (const auto& i : v) {
		if (i == idx) {
			ans++;
			idx = (++idx) % 3;
		}
	}

	cout << ans;
}