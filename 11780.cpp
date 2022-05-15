#include <iostream>
#include <queue>
#include <climits>
#include <algorithm>
using namespace std;
int val[101][101];
int route[101][101];
vector<int> r;
void find_route(int begin, int end) {
	if (route[begin][end] == 0) {
		r.push_back(begin);
		r.push_back(end);
		return;
	}

	find_route(begin, route[begin][end]);
	r.pop_back();
	find_route(route[begin][end], end);
}
int main()
{
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);
	fill(&val[0][0] , &val[100][101], INT_MAX);

	int n, e;
	cin >> n >> e;
	for (int i = 0; i < e; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		val[a][b] = ::min(val[a][b], c);
	}

	for (int k=1; k <=n; k++)
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++) {
				if (i == j)continue;
				if (val[i][k] !=INT_MAX&& val[k][j]!=INT_MAX &&val[i][j] > val[i][k] + val[k][j]) {
					val[i][j] = val[i][k] + val[k][j];
					route[i][j] = k;
				}
			}


	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			if (val[i][j] == INT_MAX) cout << 0 << " ";
			else cout << val[i][j] << " ";
		cout << endl;
	}
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			if (val[i][j] == INT_MAX) cout << 0;
			else
			{
				r.clear();
				find_route(i, j);
				cout << r.size() << " ";
				for (int k = 0; k < r.size(); k++) cout << r[k] << " ";
			}
			cout << endl;
		}
}