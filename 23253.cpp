#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n, m;
	cin >> n >> m;
	vector<vector<int>> v(m);
	for (int i = 0; i < m; i++) {
		int b;
		cin >> b;
		for (int j = 0; j < b; j++) {
			int t;
			cin >> t;
			if (v[i].size() != 0 && v[i].back() < t) {
				cout << "No";
				return 0;
			}
			v[i].push_back(t);
		}
	}

	cout << "Yes";
}