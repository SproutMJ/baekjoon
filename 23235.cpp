#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t = 1;
	while (1) {
		int n, x;
		cin >> n;
		if (n == 0)return 0;
		for (int i = 0; i < n; i++)cin >> x;

		cout << "Case " << t++ << ": Sorting... done!\n";
	}
}