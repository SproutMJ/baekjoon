#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	double a, b, c;
	cin >> a >> b >> c;

	cout << 2 * (a / 10000) * (22.9 * 32.4) + 2 * (b / 10000) * (29.7 * 42.0) + (c / 10000) * (21.0 * 29.7);
}