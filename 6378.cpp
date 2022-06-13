#include <iostream>
#include <numeric>
#include <string>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	while (1) {
		string s;
		cin >> s;

		if (s == "0")return 0;

		int n = accumulate(s.begin(), s.end(), 0, [](int val, char ch)->int {
			return val + (ch - '0');
			});


		while (n >= 10) {
			s = to_string(n);
			n = accumulate(s.begin(), s.end(), 0, [](int val, char ch)->int {
				return val + (ch - '0');
				});
		}

		cout << n << "\n";
	}
}