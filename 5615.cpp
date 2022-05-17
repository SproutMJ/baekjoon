#include <iostream>
#define ull unsigned long long
using namespace std;
ull arr[3] = { 2,7,61 };
ull power(ull x, ull y, ull m) {
	ull ret = 1;
	x %= m;
	while (y) {
		if (y % 2 == 1)ret = (ret * x) % m;
		y /= 2;
		x = (x * x) % m;
	}
	return ret;
}
bool prime(ull n, ull a) {
	if (a % n == 0)return true;
	ull k = n - 1;
	while (true) {
		ull t = power(a, k, n);
		if (t == n - 1)return true;
		if (k % 2 == 1)return(t == 1 || t == n - 1);
		k /= 2;
	}
}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n, composite = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		ull a;
		cin >> a;
		for (int j = 0; j < 3; j++) {
			if (!prime(a * 2 + 1, arr[j])) {
				composite++;
				break;
			}
		}
	}
	cout << n - composite;
}