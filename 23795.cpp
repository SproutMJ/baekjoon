#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int sum = 0;
	while (1) {
		int n;
		cin >> n;
		if (n == -1)break;
		sum += n;
	}
	cout << sum;
}