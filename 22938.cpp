#include <iostream>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;
unsigned long long int ppow(unsigned long long int x) {
	return x * x;
}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	unsigned long long int a, b, c, x, y, z;
	cin >> a >> b >> c >> x >> y >> z;

	if (ppow(a - x) + ppow(b - y) < ppow(c + z))cout << "YES";
	else cout << "NO";
}