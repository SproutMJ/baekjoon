#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
char f(char ch) {
	switch (ch) {
	case 'y':
		return 'a';
	case 'a':
		return 'e';
	case 'e':
		return 'i';
	case 'i':
		return 'o';
	case 'o':
		return 'u';
	case 'u':
		return 'y';
	case 'Y':
		return 'A';
	case 'A':
		return 'E';
	case 'E':
		return 'I';
	case 'I':
		return 'O';
	case 'O':
		return 'U';
	case 'U':
		return 'Y';
	default:
		return ch;
	}
}
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	cin >> n;
	cin.ignore();
	while (n--) {
		string s;
		getline(cin, s);
		transform(s.begin(), s.end(), s.begin(), f);
		cout << s << "\n";
	}
}