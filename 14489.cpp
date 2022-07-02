#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int a, b, c;
	cin >> a >> b >> c;

	cout << ((a + b >= 2 * c) ? a + b - 2 * c : a + b);
}