#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	double n;
	cin >> n;

	cout << 100.0 / n << "\n" << 100 / abs(100.0 - n);
}