#include <iostream>
#include <queue>
#include <cmath>

using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	double k, d1, d2;
	cin >> k >> d1 >> d2;

	cout << k * k - ((d1 - d2) / 2) * ((d1 - d2) / 2);
}