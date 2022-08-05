#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	while (n--) {
		int a, b, c, x, y, z;
		cin >> a >> b >> c >> x >> y >> z;
		cout << abs(a - x) + abs(b - y) + c + z << "\n";
	}
}