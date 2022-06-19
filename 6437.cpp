#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int i = 1;
	while (1) {
		int a, b;
		cin >> a >> b;
		if (a == 0 && b == 0)break;

		cout << "Hole #" << i++ << "\n";

		if (b == 1)cout << "Hole-in-one.";
		else if (a == b)cout << "Par.";
		else if (a + 1 == b)cout << "Bogey.";
		else if (a + 2 <= b)cout << "Double Bogey.";
		else if (a - 1 == b)cout << "Birdie.";
		else if (a - 2 == b)cout << "Eagle.";
		else if (a - 3 == b)cout << "Double eagle.";

		cout << "\n\n";

	}
}