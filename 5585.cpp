#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	n = 1000 - n;

	int arr[] = { 500, 100, 50, 10, 5, 1 };
	int ans = 0;
	for (const auto& i : arr) {
		ans += n / i;
		n %= i;
	}

	cout << ans;
}