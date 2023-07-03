#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	while (n--) {
		int a, b;
		cin >> b >> a;
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				cout << "X";
			}
			cout << "\n";
		}

		cout << "\n";
	}
}