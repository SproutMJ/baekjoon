#include <iostream>
#include <string>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int a, b, c;
	cin >> a >> b >> c;

	if (a == 1 && b == 0 && c == 0) cout << "A";
	else if (a == 0 && b == 1 && c == 1) cout << "A";
	else if (a == 0 && b == 1 && c == 0) cout << "B";
	else if (a == 1 && b == 0 && c == 1) cout << "B";
	else if (a == 0 && b == 0 && c == 1) cout << "C";
	else if (a == 1 && b == 1 && c == 0) cout << "C";
	else cout << "*";
}