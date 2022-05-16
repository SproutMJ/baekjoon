#include <iostream>
#include <queue>
using namespace std;
int main()
{
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string a, b;
	cin >> a >> b;
	while (true) {
		cin >> a >> b;
		if (a.length() < b.length()) {
			string t = a;
			a = b;
			b = a;
		}
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		for (int i = 0; i < b.length(); i++) {

		}
		if (a == b)return 0;
	}
}