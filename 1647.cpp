#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;
int pa[100001];
vector<tuple<int, int, int>> e;
int find(int a) {
	if (a == pa[a]) return a;
	else return pa[a] = find(pa[a]);
}
bool same(int a, int b) {
	return find(a) == find(b);
}
void uni(int a, int b) {
	a = find(a);
	b = find(b);
	if (a != b) pa[a] = b;
}
int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;
	while (m--) {
		int a, b, c;
		cin >> a >> b >> c;
		e.push_back(make_tuple(c, a, b));
	}

	sort(e.begin(), e.end());
	for (int i = 1; i <= n; i++)pa[i] = i;

	int ans = 0, max = 0;
	for (const auto& i : e) {
		if (!same(get<1>(i), get<2>(i))) {
			uni(get<1>(i), get<2>(i));
			max = ::max(max, get<0>(i));
			ans += get<0>(i);
		}
	}

	cout << ans - max;
}