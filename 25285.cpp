#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while(t--) {
		double a, b;
		cin >> a >> b;

		b = b / (a/100 * a/100);
		if (a < 140.1)cout << 6;
		else if (a < 146)cout << 5;
		else if (a < 159)cout << 4;
		else if (a < 161) {
			if (16 <= b && b < 35)cout << 3;
			else cout << 4;
		}
		else if (a < 204) {
			if (20 <= b && b < 25)cout << 1;
			else if ((18.5 <= b && b < 20)||(25<=b&&b<30))cout << 2;
			else if ((16 <= b && b < 18.5)||(30<=b&&b<35))cout << 3;
			else cout << 4;
		}
		else
			cout << 4;

		cout << "\n";
	}
}