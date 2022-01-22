#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long a, b;
	cin >> a >> b;
	cout << min(abs(a / 2 * b - (a - a / 2) * b), abs(b / 2 * a - (b - b / 2) * a));
}