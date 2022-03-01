#include <iostream>
#include <vector>
#include <tuple>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<int[3]> v(n);
	for (auto& i : v) {
		cin >> i[0] >> i[1] >> i[2];
	}

	vector<int[3]> ans(n);
	ans[0][1] = v[0][1];
	ans[0][2] = v[0][2];
	ans[0][0] = v[0][0];


	for (int i = 1; i < n; i++) {
		ans[i][0] = (v[i][0] + min(ans[i - 1][1], ans[i - 1][2]));
		ans[i][1] = (v[i][1] + min(ans[i - 1][0], ans[i - 1][2]));
		ans[i][2] = (v[i][2] + min(ans[i - 1][1], ans[i - 1][0]));
	}

	cout << min(ans[n - 1][0], min(ans[n - 1][1], ans[n - 1][2]));

}