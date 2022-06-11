#include <iostream>
#include <queue>
#include <numeric>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	while (n--) {
		int sum, k;
		cin >> sum >> k;

		vector<int> v(k);
		vector<int> vv(k);
		for (int i = 0; i < k; i++)
			cin >> v[i] >> vv[i];

		cout << sum + inner_product(v.begin(), v.end(), vv.begin(), 0) << "\n";
	}
}