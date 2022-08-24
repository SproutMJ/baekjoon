#include <iostream>
#include <queue>
using namespace std;
vector<int> vi(101, -1);
vector<int> nxt(101);


int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n + m; i++) {
		int a, b;
		cin >> a >> b;
		nxt[a] = b;
	}

	queue<int> q;
	q.push(1);
	vi[1] = 0;

	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		for (int i = 1; i <= 6; i++) {
			int ccur = cur + i;
			if (ccur > 100)continue;

			if (nxt[ccur] != 0) ccur = nxt[ccur];
			if (vi[ccur] == -1) {
				vi[ccur] = vi[cur] + 1;
				q.push(ccur);
			}
		}
	}

	cout << vi[100];
}