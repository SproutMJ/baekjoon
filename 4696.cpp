#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	while (1) {
		double a;
		cin >> a;
		if (a == 0) break;
		cout << fixed;
		cout.precision(2);
		cout << 1 + a + pow(a, 2) + pow(a, 3) + pow(a, 4) << "\n";
	}
}