#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	for (int k = 0; k < n - 1; k++)cout << " ";
	cout << "*\n";

	for (int i = 1; i < n; i++) {
		for (int k = 0; k < n - i - 1; k++)cout << " ";
		cout << "*";
		for (int k = 0; k < 2 * i - 1; k++)cout << " ";
		cout << "*\n";
	}
}