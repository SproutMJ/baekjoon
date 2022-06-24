#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	unsigned long long d, m, w, i, j, k;
	cin >> d >> m >> w >> i >> j >> k;

	char ans = (char)(((k - 1) * m * d + (j - 1) * d + i) % w + 'a' - 1);
	if (ans == 'a' - 1)ans = 'a' + w - 1;
	cout << ans;
}