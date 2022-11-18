#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		while (n--) {
			int a, b;
			cin >> a >> b;
			cout << a + b << " " << a * b << "\n";
		}
	}
}