#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M;
	cin >> N >> M;

	vector<int> v(N);
	for (auto& i : v) cin >> i;

	int begin = *max_element(v.begin(), v.end()), end = accumulate(v.begin(), v.end(), 0), result = 0;
	while (begin <= end) {
		int mid = (begin + end) / 2, tmp = 0, cnt = 0;
		for (const auto& i : v) {
			if (tmp + i <= mid) {
				tmp += i;
			}
			else {
				tmp = i;
				cnt++;
			}
		}
		if (tmp != 0) cnt += 1;

		if (cnt > M) begin = mid + 1;
		else {
			end = mid - 1;
		}
	}

	cout << begin;
}