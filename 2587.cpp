#include <iostream>
#include <queue>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	vector<int> v(5);
	for (auto& i : v)cin >> i;
	sort(v.begin(), v.end());
	cout << accumulate(v.begin(), v.end(), 0) / 5 << "\n" << v[2];
}