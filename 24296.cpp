#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	while (n % 2 == 1) {
		n = (n + 1) / 2;
	}

	cout << n;
}