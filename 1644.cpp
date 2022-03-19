#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
vector<int> prime;
bool flag[4000001];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	if (n == 1)cout << 0;
	else {
		for (int i = 2; i <= sqrt(n); i++)
			for (int j = i * 2; j <= n; j += i)
				flag[j] = true;

		for (int i = 2; i <= n; i++)
			if (flag[i] == false)
				prime.push_back(i);

		auto begin = prime.begin(), end = prime.begin();
		int sum = prime[0], ans = 0;
		while (begin <= end) {
			if (sum == n) {
				ans++;
				sum -= *begin;
				begin++;
			}
			else if (n > sum) {
				if (end + 1 == prime.end())break;
				else end++;
				sum += *end;
			}
			else {
				sum -= *begin;
				begin++;
			}
		}

		cout << ans;
	}
}