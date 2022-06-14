#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	int in = n, ax = n;

	if (n % 100 == 99) {
		cout << n;
		return 0;
	}

	while (ax % 100 != 99)
		ax++;
	if (n < 100) {
		cout << ax;
		return 0;
	}

	while (in % 100 != 99)
			in--;

	
	if (abs(in - n) < abs(ax - n))cout << in;
	else cout << ax;
}