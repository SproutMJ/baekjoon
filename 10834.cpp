#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t, a, b;
	bool r;
	cin >> t >> a >> b >> r;
	t--;

	while (t--) {
		int q, w;
		bool e;
		cin >> q >> w >> e;
		a = q;
		b = b / q * w;

		if (e)r = !r;
	}

	cout << r << " " << b;
}