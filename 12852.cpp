#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int p[1000001][2];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	fill(&p[0][0], &p[1000000][2], INT_MAX);
	int n;
	cin >> n;
	if (n == 1) {
		cout << 0 << "\n" << 1;
		return 0;
	}
	p[1][0] = 1;
	p[1][1] = 0;
	for (int i = 2; i <= n; i++) {
		if (i % 3 == 0 && p[i / 3][0] + 1 < p[i][0]) {
			p[i][0] = (p[i / 3][0] + 1);
			p[i][1] = i / 3;
		}
		
		if (i % 2 == 0 && p[i / 2][0] + 1 < p[i][0]) {
			p[i][0] = (p[i / 2][0] + 1);
			p[i][1] = i / 2;
		}

		if (p[i - 1][0] + 1 < p[i][0]) {
			p[i][0] = (p[i - 1][0] + 1);
			p[i][1] = i  - 1;
		}
	}

	vector<int> ans;
	int k = n;
	ans.push_back(n);
	while (true) {
		k = p[k][1];
		ans.push_back(k);
		if (k == 1)break;
	}

	cout << p[n][0] -1<< "\n";
	for (const auto& i : ans) cout << i << " ";
	return 0;
}