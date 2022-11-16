#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int a, b;
	cin >> a >> b;

	int ans = 0;
	while (1) {
		if (a >= 2 && b >= 1) {
			ans++;
			a -= 2;
			b -= 1;
		}
		else
		{
			break;
		}
	}

	cout << ans;
}