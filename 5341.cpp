#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	while (1) {
		int a;
		cin >> a;
		if (a == 0)break;

		int ans = 0;
		for (int i = 1; i <= a; i++)
			ans += i;

		cout << ans << "\n";
	}
}