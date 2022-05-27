#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	long long sum = 0, x = 0;
	bool flag = false;
	while (t--) {
		vector<int>::iterator i;
		int f, a;
		cin >> f;
		switch (f) {
		case 1:
			cin >> a;
			sum += a;
			if (!flag) {
				x = a;
				flag = true;
			}
			else x ^= a;
			break;
		case 2:
			int q;
			cin >> q;
			sum -= q;
			x ^= q;
			break;
		case 3:
			cout << sum << "\n";
			break;
		default:
			cout << x << "\n";
			break;
		}
	}
}