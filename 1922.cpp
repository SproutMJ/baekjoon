#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;
int parent[1001];
vector<tuple<int, int, int>> edge;
int find(int v) {
	if (v == parent[v]) return v;
	else return parent[v] = find(parent[v]);
}
bool same(int a, int b) {
	return find(a) == find(b);
}
void uni(int a, int b) {
	//if (!same(a, b))
		//parent[b] = find(a);
	
	a = find(a);
	b = find(b);

	if (a != b) parent[b] = a;
}
int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int n, t;
	cin >> n >> t;
	while(t--) {
		int a, b, c;
		cin >> a >> b >> c;
		edge.push_back(make_tuple(c, a, b));
	}

	sort(edge.begin(), edge.end());

	for (int i = 1; i <= n; i++) parent[i] = i;
	int ans = 0;
	for (const auto& i : edge) {
		if (!same(get<1>(i), get<2>(i))) {
			uni(get<1>(i), get<2>(i));
			ans += get<0>(i);
		}
	}

	cout << ans;
}