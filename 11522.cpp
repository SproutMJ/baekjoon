#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	while (n--) {
		int a, b;
		cin >> a >> b;
		cout << a << " " << b * (b + 1) / 2 << " " << b * b << " " << b * b + b << "\n";
	}
}