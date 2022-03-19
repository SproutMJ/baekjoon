#include <iostream>
#include <queue>
#include <tuple>
#include <algorithm>
using namespace std;
int v[10001][2];
vector<tuple<int, int, int>> e;
int find(int a) {
	if (a == v[a][0]) return a;
	else return v[a][0] = find(v[a][0]);
}
bool same(int a, int b) {
	return find(a) == find(b);
}
void unite(int a, int b) {
	a = find(a);
	b = find(b);

	if (a != b) {
		if (v[a][1] > v[b][1]) {
			v[b][0] = a;
			v[a][1] += v[b][1];
		}
		else {
			v[a][0] = b;
			v[b][1] += v[a][1];
		}
		
	}
}
int main()
{
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int vn, en;
	cin >> vn >> en;
	while (en--) {
		int a, b, c;
		cin >> a >> b >> c;
		e.push_back({ c, a, b });
	}

	for (int i = 1; i <= vn; i++) {
		v[i][0] = i;
		v[i][1] = 1;
	}
	sort(e.begin(), e.end());
	int sum = 0;
	for (auto &i : e) {
		if (!same(get<1>(i), get<2>(i))) {
			unite(get<1>(i), get<2>(i));
			sum += get<0>(i);
		}
	}
	cout << sum;
}