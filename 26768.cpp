#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string s;
	cin >> s;
	transform(s.begin(), s.end(), s.begin(), [](char ch)->char{
		switch (ch)
		{
		case 'a':
			return '4';
		case 'e':
			return '3';
		case 'i':
			return '1';
		case 'o':
			return '0';
		case 's':
			return '5';
		default:
			return ch;
		}
	});

	cout << s;
}