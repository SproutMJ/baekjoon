#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
vector<long long> arr, tree;
long long init(long long node, long long begin, long long end) {
	if (begin == end) return tree[node] = arr[begin];
	long long tmp = (init(node * 2, begin, (begin + end) / 2) *
		init(node * 2 + 1, (begin + end) / 2 + 1, end)) % 1000000007;
	return tree[node] = tmp;
}
long long query(long long node, long long begin, long long end, long long left, long long right) {
	if (left > end || right < begin)return 1;
	else if (left <= begin && end <= right)return tree[node];

	long long tmp = (query(node * 2, begin, (begin + end) / 2, left, right) *
		query(node * 2 + 1, (begin + end) / 2 + 1, end, left, right)) % 1000000007;
	return tmp;
}
long long update(long long node, long long begin, long long end, long long idx, long long val) {
	if (idx<begin || idx>end) return tree[node];
	if (begin == end) return tree[node] = val;
	long long tmp = (update(2 * node, begin, (begin + end) / 2, idx, val) *
		update(2 * node + 1, (begin + end) / 2 + 1, end, idx, val)) % 1000000007;
	return tree[node] = tmp;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long N, M, K;
	cin >> N >> M >> K;
	arr.resize(N + 1);
	tree.resize(N * 4 + 1);

	for (long long i = 1; i <= N; i++) cin >> arr[i];
	init(1, 1, N);
	for (long long i = 0; i < M + K; i++) {
		long long a, b, c;
		cin >> a >> b >> c;
		if (a == 1) {
			arr[b] = c;
			update(1, 1, N, b, c);
		}
		else cout << query(1, 1, N, b, c) << "\n";
	}
}