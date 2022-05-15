#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
pair<long long, long long>fun(long long n) {
	pair<long long, long long> p = { 0, 0 };
	for (long long i = 2; i <= n; i *= 2) p.first += n / i;
	for (long long i = 5; i <= n; i *= 5) p.second += n / i;
	return p;
}
int main()
{
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	long long n, m;
	cin >> n >> m;
	pair<long long, long long> p[3];
	p[0] = fun(n);
	p[1] = fun(m);
	p[2] = fun(n - m);

	cout << min(p[0].first - p[1].first - p[2].first, p[0].second - p[1].second - p[2].second);
}