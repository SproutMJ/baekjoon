#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	while (true) {
		int a, b;
		char ch;
		cin >> a >> ch >> b;

		if (a == 0 && ch == 'W' && b == 0)break;

		if (ch == 'W')
			if (a - b >= -200)cout << a - b;
			else cout << "Not allowed";
		else
			if (a + b >= -200)cout << a + b;
			else cout << "Not allowed";

		cout << "\n";

	}
}