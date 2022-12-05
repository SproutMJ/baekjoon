#include <iostream>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	while (1) {
		int b, n;
		cin >> b >> n;

		if (b == 0 && n == 0)
			break;

		int a = 1;
		int aa = 1;

		for (int num = 1; ; num++) {
			int temp = 1;

			for (int i = 0; i < n; i++) {
				temp *= num;
			}

			if (abs(temp - b) < abs(b - aa)) {
				a = num;
				aa = temp;
			}

			if (temp > b)
				break;
		}

		cout << a << "\n";
	}
}