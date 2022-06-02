#include <iostream>
#include <queue>
using namespace std;
int n, m;
long long sub[1001];
long long sum, ans;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		sum += a;
		sub[sum % m]++;
	}

	for (int i=0; i<=1000; i++)
		ans += sub[i] * (sub[i] - 1) / 2;

	cout << sub[0] + ans;
}