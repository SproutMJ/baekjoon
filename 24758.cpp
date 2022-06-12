#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	while (1) {
		int a, b;
		cin >> a >> b;

		if (a == 0 && b == 0)break;

		if (a + b == 13) cout << "Never speak again.\n";
		else if (a > b)cout << "To the convention.\n";
		else if (a < b)cout << "Left beehind.\n";
		else if (a == b)cout << "Undecided.\n";
	}
}