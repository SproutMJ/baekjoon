#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int a[3];
	for (auto& i : a)
		cin >> i;

	pair<int, int> p[3];
	for (auto& i : p)
		cin >> i.first >> i.second;

	int ans = 0;
	for (int i = 1; i <= 100; i++) {
		int t = 0;
		for (auto& j : p)
			if (j.first <= i && i < j.second)
				t++;
		ans += t * a[t - 1];
	}

	cout << ans;
}