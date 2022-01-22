#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	vector<int> v(n + 1, 0);
	for (int i = 1; i <= n; i++) {
		cin >> v[i];
	}
	int before = 0;
	for (auto& i : v) {
		i += before;
		before = i;
	}

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		cout << v[b] - v[a-1] << "\n";
	}
}