#include <iostream>
#include <queue>
#include <numeric>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	vector<double> a(n), b(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
	}

	cout << inner_product(a.begin(), a.end(), b.begin(), 0.0);
}