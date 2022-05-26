#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	if (n > 198)cout << 0;
	else {
		int ans = 0;
		for (int i = 0; i < 100; i++)
			if (n - i < 100)ans++;
		cout << ans;
	}
}