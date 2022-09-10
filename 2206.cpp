#include <iostream>
#include <queue>
#include <tuple>
using namespace std;
using tp = tuple<int, int, int>;

int n, m;
int arr[1001][1001];
int vi[1001][1001][2];

int xx[4] = { 0,0,-1,1 };
int yy[4] = { 1,-1,0,0 };
int bfs() {
	queue<tp> q;
	vi[1][1][0] = 1;
	q.push({ 1, 1, 0 });

	while (!q.empty()) {
		tp cur = q.front();
		q.pop();

		if (get<0>(cur) == n && get<1>(cur) == m) return vi[get<0>(cur)][get<1>(cur)][get<2>(cur)];

		for (int i = 0; i < 4; i++) {
			tp next = { get<0>(cur) + yy[i], get<1>(cur) + xx[i], get<2>(cur) };

			if (get<0>(next) <= 0 || get<0>(next) > n || get<1>(next) <= 0 || get<1>(next) > m)continue;
			if (vi[get<0>(next)][get<1>(next)][get<2>(cur)])continue;

			if (arr[get<0>(next)][get<1>(next)] == 0) {
				vi[get<0>(next)][get<1>(next)][get<2>(next)] = vi[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
				q.push({ get<0>(next),get<1>(next),get<2>(cur) });
			}
			if (arr[get<0>(next)][get<1>(next)] == 1 && get<2>(next) == 0) {
				vi[get<0>(next)][get<1>(next)][1] = vi[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
				get<2>(next) = 1;
				q.push(next);
			}
		}
	}

	return -1;
}
int main() {
	
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		string s;
		cin >> s;
		for (int j = 1; j <= m; j++)
			arr[i][j] = (s[j - 1] - '0');
	}

	cout << bfs();
}