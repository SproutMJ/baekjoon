#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	while (1) {
		string s;
		getline(cin, s);
		if (s == "END") return 0;
		reverse(s.begin(), s.end());
		cout << s << "\n";

	}
}