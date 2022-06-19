#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	while (1) {
		unsigned long long a, b, c, d;
		cin >> a >> b >> c >> d;

		if (a == 0 && b == 0 && c == 0 && d == 0)break;
		unsigned long long ans = 1;
		for (int i = 0; i < b; i++)ans *= a;
		a = ans;
		for (int i = 0; i < c-1; i++)ans *= a;
		a = ans;
		for (int i = 0; i < d-1; i++)ans *= a;
		
		cout << ans << "\n";
	}
}