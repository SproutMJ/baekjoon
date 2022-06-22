#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < n; j++)cout << " *";
			cout << "\n";
		}
		else {
			for (int j = 0; j < n - 1; j++)cout << "* ";
			cout << "*\n";
		}
	}
}