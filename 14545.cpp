#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	while (n--) {
		unsigned long long a;
		cin >> a;

		cout << a * (a + 1) * (2 * a + 1) / 6 << "\n";
	}
}