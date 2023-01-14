#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int a, b, c;
	char i, j;
	cin >> a >> i >> b >> j >> c;

	if (a + b == c)cout << "YES";
	else cout << "NO";
}