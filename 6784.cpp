#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	vector<char> v(n);

	for (auto& i : v)
		cin >> i;

	int ans = 0;
	for (int i = 0; i < n; i++) {
		char a;
		cin >> a;
		if (a == v[i])ans++;
	}

	cout << ans;
}