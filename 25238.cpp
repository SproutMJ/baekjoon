#include <iostream>
using namespace std;
double a, b;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	cin >> a >> b;
	if (a * (100 - b) / 100 >= 100) cout << 0;
	else cout << 1;
}