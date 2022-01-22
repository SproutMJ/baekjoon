#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;
	cin >> a >> b;
	if ((a + b) % 12 == 0)cout << 12;
	else cout << (a + b) % 12;
}