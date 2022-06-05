#include <iostream>
#include <numeric>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	while (n--) {
		int a, b;
		cin >> a >> b;
		cout << lcm(a, b) << " " << gcd(a, b) << "\n";
	}
}