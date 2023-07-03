#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	double a, b;
	cin >> a >> b;
	double ans = a / (b * b);

	if (ans > 25)cout << "Overweight";
	else if (ans < 18.5)cout << "Underweight";
	else cout << "Normal weight";
}