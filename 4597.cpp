#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	while (true) {
		cin >> s;
		if (s == "#") return 0;

		int p = 0;
		for (const auto& i : s)
			if (i == '1')p++;
		if (p % 2 == 0)
			if (s.back() == 'e') s.back() = '0';
			else s.back() = '1';
		else
			if (s.back() == 'e') s.back() = '1';
			else s.back() = '0';

		cout << s << "\n";
	}
}