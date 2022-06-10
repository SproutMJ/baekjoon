#include <iostream>
#include <numeric>
using namespace std;
double price[5] = { 350.34, 230.90, 190.55, 125.30, 180.90 };
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);
	
	int t;
	cin >> t;
	while (t--) {
		double arr[5];
		for (auto& i : arr)cin >> i;

		cout.setf(ios::fixed);
		cout.precision(2);
		cout << "$" << inner_product(price, price + 5, arr, 0.0) << "\n";
	}
}