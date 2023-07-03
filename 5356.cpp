#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
char f(char ch) {
	if (ch == 'Z') return 'A';
	return ++ch;
}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		int n;
		char ch;
		cin >> n >> ch;

		for (int i = 1; i <= n; i++) {
			for (int j = 0; j < i; j++) {
				cout << ch;
			}
			cout << "\n";
			ch = f(ch);
		}

		cout << "\n";
	}
}