#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n, sum = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
		if (n % i == 0)sum += i;

	cout << sum * 5 - 24;
}