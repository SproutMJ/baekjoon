#include <iostream>
#include <bitset>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	bitset<21> b;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string s; int a;
		cin >> s;
		if (s == "all") {
			b.set();
			continue;
		}
		else if (s[0] == 'e') {
			b.reset();
			continue;
		}
		cin >> a;
		switch (s[0]) {
		case 'r':
			b.set(a, false);
			break;
		case 'c':
			cout << b.test(a) << "\n";
			break;
		case 't':
			b.flip(a);
			break;
		case 'a':
			b.set(a, true);
			break;
		}
	}
}