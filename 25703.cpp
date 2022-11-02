#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	cout << "int a;\n";
	for (int i = 1; i <= n; i++) {
		cout << "int ";
		for (int j = 0; j < i; j++) cout << "*";
		cout << "ptr";
		if (i > 1)cout << i;
		cout << " = &";
		if (i == 1)cout << "a";
		else {
			cout << "ptr";
			if (i > 2) cout << i - 1;
		}
		cout << ";\n";
	}
}