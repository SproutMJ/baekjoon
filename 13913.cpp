#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
vector<int> v(100001, -1);
int go[2] = { -1, 1 };
int router[100001];
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);
	fill(begin(router), end(router), -1);

	int n, k;
	cin >> n >> k;


	queue<int> q;
	q.push(n);
	v[n] = 0;

	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		if (cur == k)break;

		if (cur * 2 <= 100000 && v[cur * 2] == -1) {
			v[cur * 2] = v[cur] + 1;
			q.push(cur * 2);
			router[cur * 2] = cur;
		}

		for (int i = 0; i < 2; i++) {
			int nxt = cur + go[i];
			if (nxt < 0 || nxt>100000)continue;

			if (v[nxt] == -1) {
				v[nxt] = v[cur] + 1;
				q.push(nxt);
				router[nxt] = cur;
			}
		}
	}

	cout << v[k] << "\n";

	vector<int> vrouter;
	int vcur = k;
	while (vcur != -1) {
		vrouter.push_back(vcur);
		vcur = router[vcur];
	}
	reverse(vrouter.begin(), vrouter.end());

	for (const auto& i : vrouter)
		cout << i << " ";
}