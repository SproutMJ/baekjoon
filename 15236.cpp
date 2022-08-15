#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	int ans = 0;
	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= n; j++)
			if (i <= j)
				ans += i + j;

	cout << ans;
}