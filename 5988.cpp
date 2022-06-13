#include <iostream>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	while (n--) {
		string s;
		cin >> s;

		if ((s.back() - '0') % 2 == 0)cout << "even\n";
		else cout << "odd\n";
	}
}