#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
vector<long long> arr, tree;
long long init(long long node, long long start, long long end) {
	if (start == end) return tree[node] = arr[start];
	return tree[node] = init(node * 2, start, (start + end) / 2) +
		init(node * 2 + 1, (start + end) / 2 + 1, end);
}
long long query(long long node, long long begin, long long end, long long left, long long right) {
	if (left > end || right < begin)return 0;
	else if (left <= begin && end <= right)return tree[node];

	return query(node * 2, begin, (begin + end) / 2, left, right) + query(node * 2 + 1, (begin + end) / 2 + 1, end, left, right);
}
void update(long long node, long long begin, long long end, long long idx, long long diff) {
	if (idx<begin || idx>end)return;
	tree[node] += diff;
	if (begin == end)return;
	update(node * 2, begin, (begin + end) / 2, idx, diff);
	update(node * 2 + 1, (begin + end) / 2 + 1, end, idx, diff);
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M, K;
	cin >> N >> M >> K;
	arr.resize(N + 1);
	tree.resize(N * 4 + 1);

	for (int i = 1; i <= N; i++) cin >> arr[i];
	init(1, 1, N);
	for (int i = 0; i < M + K; i++) {
		long long a, b, c;
		cin >> a >> b >> c;
		if (a == 1) {
			long long diff = c - arr[b];
			arr[b] = c;
			update(1, 1, N, b, diff);
		}
		else cout << query(1, 1, N, b, c) << "\n";
	}
}