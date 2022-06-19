#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		double a, b;
		cin >> a >> b;
		cout << (int)ceil(a / b) << "\n";
	}
}