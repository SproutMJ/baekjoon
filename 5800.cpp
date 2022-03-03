#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		vector<int> v(k);

		for (auto& j : v)cin >> j;
		sort(v.begin(), v.end(), greater<int>());

		int gap = 0;
		for (int j = 0; j < k - 1; j++)
			gap = ::max(gap, v[j] - v[j + 1]);
		cout << "Class " << i + 1 << "\n";
		cout << "Max " << v[0] << ", Min " << v.back() << ", Largest gap " << gap << "\n";
	}
}