#include <iostream>
#include <queue>
using namespace std;
long long n, k, a, b, h;
const long long m = 1000000007LL;
long long f(long long l) {
	if (l == 0)return 1;
	if (l % 2)return b * f(l - 1) % m;
	else {
		h = f(l / 2);
		return h * h % m;
	}
}
int main()
{
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);
	cin >> n >> k;

	a = 1;
	for (int i = n; i >= n - k + 1; i--)a = (a * i) % m;

	b = 1;
	for (int i = 1; i <= k; i++) b = (b * i) % m;

	b = f(m - 2);
	cout << a * b % m;
}