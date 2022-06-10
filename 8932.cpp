#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--) {
		int sum = 0;

		int a;
		cin >> a;
		sum += 9.23076 * pow((26.7 - a), 1.835);
		cin >> a;
		sum += 1.84523 * pow(a - 75, 1.348);
		cin >> a;
		sum += 56.0211 * pow(a - 1.5, 1.05);
		cin >> a;
		sum += 4.99087 * pow((42.5 - a), 1.81);
		cin >> a;
		sum += 0.188807 * pow(a - 210, 1.41);
		cin >> a;
		sum += 15.9803 * pow(a - 3.8, 1.04);
		cin >> a;
		sum += 0.11193 * pow((254 - a), 1.88);
		cout << sum << "\n";
	}
}