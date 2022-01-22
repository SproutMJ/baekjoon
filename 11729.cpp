#include <iostream>
using namespace std;

void hanoi(int start, int mid, int end, int n) {
	if (n == 1) {
		cout << start << " " << end << "\n";
	}
	else {
		hanoi(start, end, mid, n - 1);
		cout << start << " " << end << "\n";
		hanoi(mid, start, end, n - 1);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	cout << (1 << n) - 1 << '\n';
	hanoi(1, 2, 3, n);
}