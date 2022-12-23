#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string a, b;
	cin >> a >> b;
	while (a.length() != b.length()) {
		if (a.length() > b.length())
			b = "0" + b;
		else
			a = "0" + a;
	}

	string s = "";
	int carry = 0;
	for (int i = a.length() - 1; i >= 0; i--) {
		int tmp = ((a[i] - '0') + (b[i] - '0') + carry);
		carry = tmp / 10;
		s = (char)(tmp % 10 + '0') + s;
	}
	if (carry == 1)
		s = "1" + s;
	cout << s;
}