#include <iostream>
#include <queue>
#include <numeric>
#include <cmath>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	while (1) {
		int n;
		cin >> n;
		if (n == 0)break;

		vector<double> v(n);
		for (auto& i : v)cin >> i;

		double sum = accumulate(v.begin(), v.end(), 0.0);
		double avg = round(sum / n * 100) / 100;

		double ans[2] = {0, 0};
		for (int i = 0; i < n; i++)
			if (v[i] >= avg)
				ans[0] += double(v[i] - avg);
			else
				ans[1] += double(avg - v[i]);

		cout.setf(ios::fixed);
		cout.precision(2);
		cout << "$" << min(ans[0], ans[1]) << "\n";
	}
}