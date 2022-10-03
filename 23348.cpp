#include <iostream>
#include <queue>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	vector<int> score(3);
	for (auto& i : score)
		cin >> i;

	int n;
	cin >> n;

	int ans = 0;
	while (n--) {
		vector<int> v(3);
		int t, i = 3;
		while (i--) {
			for (int j = 0; j < 3; j++) {
				cin >> t;
				v[j] += t;
			}
		}

		ans = max(ans, inner_product(v.begin(), v.end(), score.begin(), 0));
	}

	cout << ans;
}