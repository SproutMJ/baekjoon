#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	double a, b;
	cin >> a >> b;
	double min = a / b;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		min = (min > (a / b) ? (a / b) : min);
	}

	cout << min * 1000 << "\n";
}