#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		unsigned long long arr[3];
		for (auto& j : arr)cin >> j;
		sort(arr, arr + 3);

		cout << "Scenario #" << i << ":\n";
		if (arr[2] * arr[2] == arr[0] * arr[0] + arr[1] * arr[1])cout << "yes";
		else cout << "no";

		cout << "\n\n";
	}
}