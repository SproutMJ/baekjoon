#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	double n, t;
	cin >> t;

	while (t--) {
		cin >> n;
		cout << ceil(n / 2) * ceil(n / 2) << "\n";
	}
}