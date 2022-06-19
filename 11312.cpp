#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		unsigned long long a, b;
		cin >> a >> b;
		cout << (a / b) * (a / b) << "\n";
	}
}