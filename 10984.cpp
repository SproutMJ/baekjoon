#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);
	cout << fixed;
	cout.precision(1);


	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a = 0;
		double b = 0;

		while (n--) {
			int q;
			double w;
			cin >> q >> w;
			a += q;
			b += w*q;
		}

		cout << a << " " << (double)b / (double)a << "\n";
	}
}