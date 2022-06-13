#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n, sum, m;
	cin >> n >> sum;
	m = sum;

	while (n--) {
		int a, b;
		cin >> a >> b;
		sum += a;
		sum -= b;
		m = max(m, sum);
		if (sum < 0) {
			cout << 0;
			return 0;
		}
	}
	cout << m;
}