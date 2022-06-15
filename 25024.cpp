#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
vector<int> v = { 1, 3, 5, 7, 8, 10, 12 };
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;

		if (0 <= a && a <= 23 && 0 <= b && b <= 59)cout << "Yes ";
		else cout << "No ";

		if (1 <= a && a <= 12) {
			if (a == 2) {
				if (1 <= b && b <= 29)cout << "Yes";
				else cout << "No";
			}
			else if (binary_search(v.begin(), v.end(), a)) {
				if (1 <= b && b <= 31)cout << "Yes";
				else cout << "No";
			}
			else {
				if (1 <= b && b <= 30)cout << "Yes";
				else cout << "No";
			}
		}
		else cout << "No";
		cout << "\n";
	}
}