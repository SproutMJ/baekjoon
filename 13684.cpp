#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	while (1) {
		int a;
		cin >> a;
		if (a == 0) break;

		int n, m;
		cin >> n >> m;

		while (a--) {
			int i, j;
			cin >> i >> j;
			if (i == n || j == m)cout << "divisa";
			else if (i < n && j > m)cout << "NO";
			else if (i > n && j > m)cout << "NE";
			else if (i < n && j < m)cout << "SO";
			else cout << "SE";

			cout << "\n";
		}
	}
}