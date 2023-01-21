#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i % 7 == 0 && i % 11 == 0)
			cout << "Cheers!";
		else if (i % 11 == 0)
			cout << "Super!";
		else if (i % 7 == 0)
			cout << "Hurra!";
		else cout << i;

		cout << "\n";
	}
}