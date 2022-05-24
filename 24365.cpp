#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int a, b, c;
	cin >> a >> b >> c;

	int avg = (a + b + c) / 3;

	int ans = 0;
	ans += avg - a;
	b -= avg - a;
	if (b < 0) {
		ans += -1 * b;
		ans += avg;
	}
	else ans += avg - b;

	cout << ans;

}