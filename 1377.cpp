#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a;
	cin >> a;
	vector<pair<int, int>> v(a);

	for (int i = 0; i < a; i++) {
		cin >> v[i].first;
		v[i].second = i;
	}

	sort(v.begin(), v.end());

	int ans = 0;
	for (int i = 0; i < a; i++) ans = max(ans, v[i].second - i);
	cout << ans + 1;
}