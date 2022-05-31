#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
long long n, c, w[31], ans;
vector<long long> a, aa;
void dfs(int s, int e, vector<long long>& v, long long sum) {
	if (s > e) {
		v.push_back(sum);
		return;
	}
	
	dfs(s + 1, e, v, sum);
	dfs(s + 1, e, v, sum + w[s]);
}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	cin >> n >> c;

	for (int i = 0; i < n; i++)
		cin >> w[i];

	dfs(0, n / 2, a, 0);
	dfs(n / 2 + 1, n - 1, aa, 0);
	sort(aa.begin(), aa.end());

	for (int i = 0; i < a.size(); i++)
		ans += upper_bound(aa.begin(), aa.end(), c - a[i]) - aa.begin();

	cout << ans;
}