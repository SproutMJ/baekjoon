#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	cout << "Gnomes:\n";

	int n;
	cin >> n;
	while (n--) {
		int a, b, c;
		cin >> a >> b >> c;
		if ((a <= b && b <= c) || (a >= b && b >= c))cout << "Ordered\n";
		else cout << "Unordered\n";
	}
}