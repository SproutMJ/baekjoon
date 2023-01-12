#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string s;
	while (getline(cin, s)) {
		transform(s.begin(), s.end(), s.begin(), [](char ch)->char {
			switch (ch)
			{
			case 'i':
				return 'e';
			case 'e':
				return 'i';
			case 'I':
				return 'E';
			case 'E':
				return 'I';
			default:
				return ch;
			}
			});

		cout << s << "\n";
	}
}