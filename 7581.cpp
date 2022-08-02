#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	while (1) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		if (a == 0 && b == 0 && c == 0 && d == 0)break;

		if (d == 0) cout << a << " " << b << " " << c << " " << a * b * c;
		else if (a == 0) {
			cout << d / b / c << " " << b << " " << c << " " << d;
		}
		else if (b == 0) {
			cout << a << " " << d / a / c << " " << c << " " << d;
		}
		else if (c == 0) {
			cout << a << " " << b << " " << d / a / b << " " << d;
		}
		cout << "\n";
	}
}