#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	vector<pair<int, int>> v(n);
	for (auto& i : v)cin >> i.first >> i.second;
	sort(v.begin(), v.end());

	priority_queue<int, vector<int>, greater<int>> pq;

	pq.push(v[0].second);
	for (int i = 1; i < n; i++) {
		if (pq.top() <= v[i].first) {
			pq.pop();
			pq.push(v[i].second);
		}
		else {
			pq.push(v[i].second);
		}
	}

	cout << pq.size();
}