#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
vector<pair<long long, long long>> v;
long long ip(pair<long long, long long> a, pair<long long, long long> b, pair<long long, long long> c) {
	long long tmp = a.first * b.second + b.first * c.second + c.first * a.second;
	tmp -= b.first * a.second + c.first * b.second + a.first * c.second;

	if (tmp > 0) return 1;
	else if (tmp == 0) return 0;
	else if (tmp < 0) return -1;
}
void find_intersection(pair<long long, long long> a, pair<long long, long long> b, pair<long long, long long> c, pair<long long, long long> d)
{
	double px = (a.first * b.second - a.second * b.first) * (c.first - d.first) - (a.first - b.first) * (c.first * d.second - c.second * d.first);
	double py = (a.first * b.second - a.second * b.first) * (c.second - d.second) - (a.second - b.second) * (c.first * d.second - c.second * d.first);
	double p = (a.first - b.first) * (c.second - d.second) - (a.second - b.second) * (c.first - d.first);

	if (p == 0) {
		if (b == c && a <= c) cout << b.first << " " << b.second << '\n';
		else if (a == d && c <= a) cout << a.first << " " << a.second << '\n';
	}
	else {
		double x = px / p;
		double y = py / p;

		cout << fixed;
		cout.precision(9);
		cout << x << " " << y;
	}
}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	for (int i = 0; i < 4; i++) {
		long long a, b;
		cin >> a >> b;
		v.push_back({ a,b });
	}

	long long ans1 = ip(v[0], v[1], v[2]) * ip(v[0], v[1], v[3]);
	long long ans2 = ip(v[2], v[3], v[0]) * ip(v[2], v[3], v[1]);

	if (ans1 == 0 && ans2 == 0) {
		if (v[0] > v[1]) swap(v[0], v[1]);
		if (v[2] > v[3]) swap(v[2], v[3]);

		if (v[0] <= v[3] && v[1] >= v[2]) {
			cout << 1 << '\n';
			find_intersection(v[0], v[1], v[2], v[3]);
		}
		else cout << 0 << '\n';
	}
	else {
		if (ans1 <= 0 && ans2 <= 0) {
			cout << 1 << '\n';
			find_intersection(v[0], v[1], v[2], v[3]);
		}
		else cout << 0 << '\n';
	}
}