#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	cout << fixed;
	cout.precision(7);


	int n;
	cin >> n;
	while (n--) {
		double a, b;
		cin >> a >> b;

		cout << a / (100 + b) * 100 << "\n";
	}
	
}