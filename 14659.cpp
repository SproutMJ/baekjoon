#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	vector<int> v(n);
	for (auto& i : v)cin >> i;

	int max = 0;
	for (int i = 0; i < n; i++) {
		int tmp = 0;
		for (int j = i + 1; j < n; j++) {
			if (v[i] >= v[j]) {
				if (v[i] > v[j])tmp++;
			}
			else break;
		}
		max = std::max(tmp, max);
	}

	cout << max;
}