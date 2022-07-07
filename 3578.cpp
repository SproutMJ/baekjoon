#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	if (n == 0)cout << 1;
	else if (n == 1)cout << 0;
	else if (n % 2 == 0) {
		for (int i = 0; i < n / 2; i++)cout << 8;
	}
	else {
		cout << 4;
		for (int i = 0; i < n / 2; i++)cout << 8;
	}
}