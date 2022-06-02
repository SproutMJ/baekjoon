#include <iostream>
#include <queue>
using namespace std;
typedef vector<vector<long long>> vvll;
vvll fun(vvll& l, vvll& r) {
	vvll ret(2, vector<long long>(2));

	for (int i=0; i<2; i++)
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++)
				ret[i][j] += l[i][k] * r[k][j];
			ret[i][j] %= 1000000007;
		}
	return ret;
}

int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	long long n;
	cin >> n;

	vvll ans = { {1,0},{0, 1} };
	vvll t = { {1,1},{1, 0} };

	while (n > 0) {
		if (n % 2 == 1)
			ans = fun(ans, t);
		t = fun(t, t);
		n /= 2;
	}

	cout << ans[0][1];
}