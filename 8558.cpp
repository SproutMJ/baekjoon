#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n, ans = 1;
	cin >> n;
	for (int i = 1; i <= n; i++)ans = (ans * i) % 10;

	cout << ans;
}