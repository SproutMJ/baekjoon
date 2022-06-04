#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int v, e, endt = 1;
vector<int> gra[10001], grar[10001];
bool vis[10001], visr[10001];

vector< vector<int> > scc;
vector<int> seqr;

void dfs(int n) {
	vis[n] = true;

	for (int i = 0; i < gra[n].size(); i++) {
		int next = gra[n][i];
		if (vis[next]) continue;
		dfs(next);
	}

	seqr.push_back(n);
}

void dfsr(int n, vector<int>& temp) {

	visr[n] = true;
	temp.push_back(n);

	for (int i = 0; i < grar[n].size(); i++) {
		int next = grar[n][i];
		if (visr[next]) continue;
		dfsr(next, temp);
	}
}

int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	cin >> v >> e;
	for (int i = 0; i < e; i++) {
		int a, b;
		cin >> a >> b;
		gra[a].push_back(b);
		grar[b].push_back(a);
	}

	for (int i = 1; i <= v; i++) {
		if (vis[i])continue;
		dfs(i);
	}

	vector<int> temp;
	for (int i = seqr.size() - 1; i >= 0; i--) {
		int now = seqr[i];
		if (visr[now]) continue;
		dfsr(now, temp);
		scc.push_back(temp);
		temp.clear();
	}

	for (auto& w : scc)
		sort(w.begin(), w.end());
	sort(scc.begin(), scc.end());

	cout << scc.size() << "\n";

	for (auto& i : scc) {
		for (auto& j : i)
			cout << j << " ";
		cout << "-1\n";
	}
}