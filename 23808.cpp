#include <iostream>
#include <queue>
using namespace std;
void f(char ch, int n) {
	for (int i = 0; i < n; i++)cout << ch;
}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	for (int i = 0; i < n * 2; i++) {
		f('@', n);
		for (int i = 0; i < n; i++)
			f(' ', 3);
		f('@', n);
		cout << "\n";
	}

	for (int i = 0; i < n; i++) {
		for (int i = 0; i < n; i++)
			f('@', 5);
		cout << "\n";
	}


	for (int i = 0; i < n; i++) {
		f('@', n);
		for (int i = 0; i < n; i++)
			f(' ', 3);
		f('@', n);
		cout << "\n";
	}

	for (int i = 0; i < n; i++) {
		for (int i = 0; i < n; i++)
			f('@', 5);
		cout << "\n";
	}
}