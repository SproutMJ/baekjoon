#include <iostream>
#include <bitset>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		bitset<101> b;
		b.reset();

		for (int i = 1; i <= n; i++)
			for (int j = i; j <= n; j += i)
				b.flip(j);
		cout << b.count() << "\n";
	}
}