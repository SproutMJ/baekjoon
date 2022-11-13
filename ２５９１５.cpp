#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
double n, p, ans;
int fun() {
	if (n < 5) return p;
	if (n < 10) return p - 500;
	if (n < 15) return min(p - 500, p * 0.9);
	if (n < 20) return min({ p - 500, p * 0.9, p - 2000 });
	return min({ p - 500, p * 0.9, p - 2000, p * 0.75 });
}

int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);
	cin >> n >> p;

	ans = fun();

	if (ans < 0) ans = 0;
	cout << ans;
}