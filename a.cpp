#include <iostream>
#include <queue>
#include <tuple>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		int n;
		vector<tuple<int, int, int>> v;
		cin >> n;
		while (n--) {
			int a, b, c;
			cin >> a >> b >> c;
			v.push_back({ a,b,c });
		}

		long long  k, d, a;
		cin >> k >> d >> a;
		long long ans = 0;
		for (const auto& i : v) {
			long long  tmp = 0;
			tmp += get<0>(i) * k;
			tmp -= get<1>(i) * d;
			tmp += get<2>(i) * a;
			if (tmp > 0) ans += tmp;
		}

		cout << ans << "\n";
	}
}