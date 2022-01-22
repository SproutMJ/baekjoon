#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int, int>> arr;
int find(int a) {
	if (arr[a].first == a)return a;
	else return arr[a].first = find(arr[a].first);
}
bool same(int a, int b) {
	return find(a) == find(b);
}
void unite(int a, int b) {
	a = find(a);
	b = find(b);

	if (a != b) {
		if (arr[a].second > arr[b].second) {
			arr[b].first = a;
			arr[a].second += arr[b].second;
		}
		else {
			arr[a].first = b;
			arr[b].second += arr[a].second;
		}
	}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n, m;
	cin >> n >> m;

	arr.resize(n + 1);
	for (int i = 1; i <= n; i++) {
		arr[i] = make_pair(i, 1);
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			int tmp;
			cin >> tmp;
			if (tmp) unite(i, j);
		}
	}

	vector<int> v(m);
	for (auto& i : v) {
		cin >> i;
	}

	bool flag = true;
	for (const auto& i : v) {
		if (!same(i, v[0])) {
			flag = false;
			break;
		}
	}

	cout << ((flag) ? "YES" : "NO");
}