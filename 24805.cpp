#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int a, b, c;
	cin >> a >> b >> c;
	int now = 0, k = 0;

	while (now < c) {
		k++;
		now += a;
		if (now >= c)
			break;
		now -= b;
	}

	cout << k;
}