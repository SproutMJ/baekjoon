#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	vector<int> v;
	int a, b;
	cin >> a >> b;
	v.push_back(a);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}
	pair<int, int> p = { v[0], abs(a - b) };
	for (int i = 1; i <= n; i++)
		if (abs(b - v[i]) + 1 < p.second)
			p = { v[1], abs(b - v[i]) + 1 };
	cout << p.second;
}