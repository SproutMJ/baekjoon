#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
vector<int> vi(100001, -1);
int go[2] = { -1, 1 };
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n, m;
	cin >> n >> m;

	queue<int> q;
	q.push(n);
	vi[n] = 0;

	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		if (cur * 2 <= 100000 && vi[cur * 2] == -1) {
			vi[cur * 2] = vi[cur];
			q.push(cur * 2);
		}

		for (int i = 0; i < 2; i++) {
			int nxt = cur + go[i];
			if (nxt < 0 || nxt>100000)continue;

			if (vi[nxt] == -1) {
				vi[nxt] = vi[cur] + 1;
				q.push(nxt);
			}
		}
	}

	cout << vi[m];
}