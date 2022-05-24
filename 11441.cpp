#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	vector<int> v(n + 1);
	for (int i = 1; i <= n; i++)
		cin >> v[i];
	vector<int> arr(n + 1);

	arr[1] = v[1];
	for (int i = 2; i < v.size(); i++) {
		arr[i] = arr[i - 1] + v[i];
	}

	int t;
	cin >> t;
	while (t--) {
		int i, j;
		cin >> i >> j;

		cout << arr[j] - arr[i - 1] << "\n";
	}

}