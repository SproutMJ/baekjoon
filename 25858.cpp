#include <iostream>
#include <queue>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n, k;
	cin >> n >> k;

	vector<int> v(n);
	for (auto& i : v)cin >> i;

	int sum = accumulate(v.begin(), v.end(), 0);
	for (const auto& i : v)
		cout << i * k / sum << "\n";
}