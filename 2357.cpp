#include <iostream>
#include <vector>
using namespace std;
vector<int> arr, _min, _max;
void init(int index, int begin, int end) {
	if (begin == end) {
		_min[index] = _max[index] = arr[end];
		return;
	}

	init(index * 2, begin, (begin + end) / 2);
	init(index * 2 + 1, (begin + end) / 2 + 1, end);
	_min[index] = min(_min[index * 2], _min[index * 2 + 1]);
	_max[index] = max(_max[index * 2], _max[index * 2 + 1]);
	return;
}

pair<int, int> query(int node, int a, int b, int begin, int end) {
	if (b < begin || end < a)return make_pair(1 << 30, 0);
	if (a <= begin && end <= b)return make_pair(_min[node], _max[node]);

	pair<int, int> left, right;
	left = query(node * 2, a, b, begin, (begin + end) / 2);
	right = query(node * 2 + 1, a, b, (begin + end) / 2 + 1, end);
	return make_pair(min(left.first, right.first), max(left.second, right.second));
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	arr.resize(n + 1, 0);
	_min.resize(n * 4);
	_max.resize(n * 4);

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	init(1, 1, n);

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		pair<int, int> p = query(1, a, b, 1, n);
		cout << p.first << " " << p.second << "\n";
	}
	
	return 0;
}