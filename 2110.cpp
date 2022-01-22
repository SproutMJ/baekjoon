#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	vector<int> v(n);
	for (auto& i : v)cin >> i;

	sort(v.begin(), v.end());
	
	int begin = 1, end = v[n - 1] - v[0], result = 0;
	while (begin <= end) {
		int mid = (begin + end) / 2, cnt = 1, prev = v[0];
		for (int i = 1; i < n; i++) {
			if (v[i] - prev >= mid) {
				cnt++;
				prev = v[i];
			}
		}

		if (cnt >= m) {
			result = max(result, mid);
			begin = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}

	cout << result;
}