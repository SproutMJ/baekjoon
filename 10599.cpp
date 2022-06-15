#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	while (1) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;

		if (a == 0 && b == 0 && c == 0 && d == 0)break;

		cout << c - b << " " << d - a << "\n";
	}
}