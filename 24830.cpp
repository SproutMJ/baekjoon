#include <iostream>
#include <queue>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	long long t, be = 1;
	cin >> t;

	while (t--) {
		long long a, b;
		char ch;
		cin >> a >> ch >> b;

		long long now;
		if (ch == '+')
			now = a + b - be;
		else if (ch == '-')
			now = (a - b) * be;
		else if (ch == '*')
			now = (a * b)*(a * b);
		else
			if (a % 2 == 0) now = a / 2;
			else now = (a + 1) / 2;
			
		cout << now << "\n";
		be = now;
	}
}