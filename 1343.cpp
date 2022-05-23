#include <iostream>
#include <string>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string s, ans = "";
	cin >> s;


	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'X') {
			int j;
			for (j = i; j <= s.length(); j++) {
				if (s[j] == '.') {
					if ((j - i) % 2 == 1) {
						cout << -1;
						return 0;
					}
					else if((j - i) % 4 == 0) {
						for (int k = i; k < j; k++) s[k] = 'A';
						break;
					}
					else {
						for (int k = i; k < j - 2; k++) s[k] = 'A';
						s[j - 2] = 'B';
						s[j - 1] = 'B';
						break;
					}
				}
				else if (j == s.length()) {
					if ((j - i) % 2 == 1) {
						cout << -1;
					}
					else if ((j - i) % 4 == 0) {
						for (int k = i; k < j; k++) s[k] = 'A';
						cout << s;
					}
					else {
						for (int k = i; k < j - 2; k++) s[k] = 'A';
						s[j - 2] = 'B';
						s[j - 1] = 'B';
						cout << s;
					}
					return 0;
				}
			}
			i = j;
		}
	}

	cout << s;
}