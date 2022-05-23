#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int a, b;
	cin >> a >> b;
	a += b;
	vector<int> v(a);
	for (auto& i : v)cin >> i;
	sort(v.begin(), v.end());
	for (const auto& i : v) cout << i << " ";

}