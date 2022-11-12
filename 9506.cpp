#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	while (1) {
		int n;
		cin >> n;
		if (n == -1) break;

		int sum = 0;
		vector<int> v;
		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				v.push_back(i);
				sum += i;
			}
		}

		if (sum != n)cout << n << " is NOT perfect.\n";
		else {
			cout << n << " = ";
			for (int i = 0; i < v.size(); i++) {
				cout << v[i];
				if (i < v.size() - 1)cout << " + ";
				else cout << "\n";
			}
		}
	}
}