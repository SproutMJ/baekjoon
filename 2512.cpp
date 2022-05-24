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
	int budget;
	cin >> budget;

	sort(v.begin(), v.end());

	int begin = 0, end = v.back(), ans, sum;
	while (begin <= end) {
		sum = 0;
		int m = (begin + end) / 2;
		for (int i = 0; i < n; i++)
			sum += min(v[i], m);

		if (budget >= sum) {
			begin = m + 1;
			ans = m;
		}
		else end = m - 1;

	}

	cout << ans;
}