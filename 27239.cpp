#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	cout << (char)((n % 8 == 0) ? 'h' : 'a' + n % 8 - 1) << (n - 1) / 8 + 1;
}