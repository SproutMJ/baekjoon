#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int n;
long long ans;
vector<int> tree[125000];
long long land[125000];
long long dfs(int n) {
	if (tree[n].empty()) {
		if (land[n] > 0)
			return land[n];
		else return 0;
	}

	long long sum = 0;
	sum += land[n];
	for (int i = 0; i < tree[n].size(); i++) {
		int nxt = tree[n][i];
		sum += dfs(nxt);
	}

	if (sum <= 0)
		return 0;
	return sum;
}

int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	cin >> n;
	for (int i = 2; i <= n; i++) {
		char t;
		long long a;
		int p;
		cin >> t >> a >> p;
		tree[p].push_back(i);
		if (t == 'S')land[i] = a;
		else land[i] -= a;
	}

	cout << dfs(1);
}