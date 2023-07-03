#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	cout << fixed;
	cout.precision(2);

	int t;
	cin >> t;
	while (t--) {
		double a, b;
		cin >> a >> b;
		cout << "The height of the triangle is " << (2 * a) / b << " units\n";
	}
}