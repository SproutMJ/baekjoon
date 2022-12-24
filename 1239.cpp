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
	for (auto& i : v)
		cin >> i;

	sort(v.begin(), v.end());

	int ans = 0;
	do {
		int val = 0;
		int sum = 0;
		auto end = v.begin();

		for (auto iter = v.begin(); iter < v.end(); iter++) {
			while (sum < 50 && end < v.end() -1) {
				sum += *end;
				end++;
			}

			if (sum == 50)
				val++;

			sum -= *iter;
		}
		
		ans = max(ans, val);
	} while (next_permutation(v.begin(), v.end()));

	cout << ans;
}