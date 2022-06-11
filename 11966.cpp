#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n, t = 1;
	cin >> n;

	for (int i = 0; i <= 30; i++) {
		if (n == t) {
			cout << 1;
			return 0;
		}
		t <<= 1;
	}
	cout << 0;
}