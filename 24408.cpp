#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n, a;
	cin >> n >> a;
	n--;

	while (n--) {
		int b;
		cin >> b;
		if (b % a == 0) {
			cout << b << "\n";
			cin >> a;
			n--;
		}
	}
}