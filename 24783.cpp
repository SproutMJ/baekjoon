#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		double a, b, c;
		cin >> a >> b >> c;

		if (a + b == c) {
			cout << "Possible\n";
			continue;
		}
		else if (a - b == c) {
			cout << "Possible\n";
			continue;
		}
		else if (a * b == c) {
			cout << "Possible\n";
			continue;
		}
		else if (a / b == c) {
			cout << "Possible\n";
			continue;
		}

		double tmp;
		tmp = a;
		a = b;
		b = tmp;

		if (a - b == c) {
			cout << "Possible\n";
			continue;
		}
		else if (a * b == c) {
			cout << "Possible\n";
			continue;
		}
		else if (a / b == c) {
			cout << "Possible\n";
			continue;
		}
		cout << "Impossible\n";
	}
}