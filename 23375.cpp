#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int x, y, r;
	cin >> x >> y >> r;

	cout << x - r << ' ' << y + r << '\n';
	cout << x + r << ' ' << y + r << '\n';
	cout << x + r << ' ' << y - r << '\n';
	cout << x - r << ' ' << y - r << '\n';
}