#include <iostream>
using namespace std;
int main()
{
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n, begin = 0, end = 0, sum = 0, ans = 0;
	cin >> n;
	while (begin <= end) {
		if (sum > n) {
			sum -= begin;
			begin++;
			continue;
		}
		if (sum == n) ans++;
		end++;
		sum += end;
	}
	cout << ans;
}