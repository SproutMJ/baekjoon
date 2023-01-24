#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int a, b;
	cin >> a >> b;
	int y = 0, m = 0;

	if (a < 1)
		m += 15 * b;
	else if (a < 2) {
		y += 15;
		m = 9 * b;
	}
	else {
		y += 24;
		a -= 2;
		y += a * 4;
		m = b * 4;
	}

	if (m > 12) {
		y += m / 12;
		m %= 12;
	}

	cout << y << " " << m;

}