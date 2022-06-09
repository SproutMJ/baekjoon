#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int n;
		double d, a, b, f;
		cin >> n >> d >> a >> b >> f;

		cout << n << " " << d / (a + b) * f << "\n";
	}
}