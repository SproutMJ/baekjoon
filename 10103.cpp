#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int a = 100, b = 100, t;
	cin >> t;

	while (t--) {
		int q, qq;
		cin >> q >> qq;

		if (q < qq)a -= qq;
		else if (q > qq)b -= q;
	}

	cout << a << "\n" << b;
}