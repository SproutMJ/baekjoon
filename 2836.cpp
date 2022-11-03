#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	long long n, m;
	cin >> n >> m;
	vector<pair<int, int> > v;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		if (a > b) 
			v.push_back({ b, a });
	}
	sort(v.begin(), v.end());

	long long  last = v[0].second, len = v[0].second - v[0].first;
	for (const auto &i : v) {
		if (i.first<= last) {
			if (last < i.second) {
				len += i.second - last;
				last = i.second;
			}
		}
		else {
			len += i.second - i.first;
			last = i.second;
		}
	}

	cout << m + len * 2;
}