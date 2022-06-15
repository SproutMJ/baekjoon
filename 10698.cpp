#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int a, b, c;
		char f, ch;
		cin >> a >> f >> b >> ch >> c;

		cout << "Case " << i << ": ";
		if (f == '+') {
			if (a + b == c)cout << "YES";
			else cout << "NO";
		}
		else {
			if (a - b == c)cout << "YES";
			else cout << "NO";
		}
		cout << "\n";
	}
}