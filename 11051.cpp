#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int arr[1001][1001];
int fun(int n, int k) {
	if (n == k || k == 0) return 1;
	else if (arr[n][k] != 0)return arr[n][k];
	else return arr[n][k] = ((fun(n - 1, k - 1) % 10007 + fun(n - 1, k)) % 10007);
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin >> n >> k;

	cout << fun(n, k);
}