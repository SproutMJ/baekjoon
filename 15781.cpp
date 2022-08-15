#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n, m;
	cin >> n >> m;
	int a = 0, b = 0;
	while (n--) {
		int t;
		cin >> t;
		a = max(t, a);
	}
	while (m--) {
		int t;
		cin >> t;
		b = max(t, b);
	}

	cout << a + b;
}