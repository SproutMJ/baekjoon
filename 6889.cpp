#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int a, b;
	cin >> a >> b;
	vector<string> v(a), vv(b);

	for (auto& i : v)
		cin >> i;
	for (auto& i : vv)
		cin >> i;

	for (auto& i : v)
		for (auto& j : vv)
			cout << i << " as " << j << "\n";
}