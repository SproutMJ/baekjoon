#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	vector<int> v(n);
	for (auto& i : v)cin >> i;
	int t;
	cin >> t;
	while (t--) {
		int a;
		cin >> a;
		v[a - 1]--;
	}

	for (const auto i : v)
		if (i < 0)cout << "yes\n";
		else cout << "no\n";
}