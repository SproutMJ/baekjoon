#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int a, b;
	cin >> a >> b;

	cout << (((a * b) % 3 == 0) ? "YES" : "NO");
}