#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	while (1) {
		int a, b;
		if (cin >> a >> b) {
			cout << b / (a + 1) << "\n";
		}
		else
			break;
	}
}