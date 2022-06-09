#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	for (int i = 0; i < 5 * n - n; i++) {
		for (int i = 0; i < n; i++)
			cout << '@';
		cout << "\n";
	}

	for (int i = 0; i < n; i++) {
		for (int i = 0; i < n * 5; i++)
			cout << '@';
		cout << "\n";
	}
}