#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	vector<string> v(n);
	for (auto& i : v) cin >> i;
	sort(v.begin(), v.end());

	int ans = 0;
	for (int i = 0; i < m; i++) {
		string s;
		cin >> s;
		if (binary_search(v.begin(), v.end(), s))ans++;
	}

	cout << ans;
}