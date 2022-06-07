#include <iostream>
#include <queue>
using namespace std;
vector<int> v(31);
bool dp[31][15001];
int n;

void fun(int i, int w) {
	if (i > n || dp[i][w])return;

	dp[i][w] = true;
	fun(i + 1, w + v[i]);
	fun(i + 1, abs(w - v[i]));
	fun(i + 1, w);
}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> v[i];

	fun(0, 0);

	int a, b;
	cin >> a;
	while (a--) {
		cin >> b;

		if (b > 15000) cout << "N ";
		else if (dp[n][b]) cout << "Y ";
		else cout << "N ";
	}
}