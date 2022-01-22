#include <iostream>
#include <bitset>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	bitset<100000> a, b, c;
	cin >> a >> b;
	c = a & b;
	cout << c << "\n";
	c = a | b;
	cout << c << "\n";
	c = a ^ b;
	cout << c << "\n";
	cout << a.flip() << "\n";
	cout << b.flip();
}