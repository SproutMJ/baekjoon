#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n, ans = 987654321;
	cin >> n;
	while (n--) {
		int a, b;
		cin >> a >> b;
		ans = min(ans, b / a);
	}

	cout << ans;
}