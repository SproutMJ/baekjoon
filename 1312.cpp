#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int a, b, c, r = 0;
	cin >> a >> b >> c;
	if (a % b == 0) {
		cout << 0;
		return 0;
	}
	if (a > b)a %= b;
	for (int i = 0; i < c; i++) {
		a *= 10;
		r = (int)(a / b);
		a %= b;
	}
	cout << r;
}