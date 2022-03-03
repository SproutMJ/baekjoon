#include <iostream>
#include <algorithm>
using namespace std;
bool pred(const char& ch) {
	return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	while (true) {
		string s;
		cin >> s;
		if (s == "end") break;

		bool flag = true;
		for (const auto& i : s)
			if (pred(i)) {
				flag = false;
				break;
			}
		if (flag) {
			cout << "<" << s << "> is not acceptable.\n";
			continue;
		}

		int con = 0, vow = 0;
		for (const auto& i : s) {
			if (pred(i)) {
				vow++;
				con = 0;
			}
			else {
				vow = 0;
				con++;
			}

			if (con == 3 || vow == 3) {
				cout << "<" << s << "> is not acceptable.\n";
				flag = true;
				break;
			}
		}
		if (flag) continue;

		if (adjacent_find(s.begin(), s.end(), [](const char& l, const char& r)->bool {
			if ((l == 'e' && r == 'e') || (l == 'o' && r == 'o'))return false;
			else if (l == r) return true;
			else return false; }) == s.end()) {
			cout << "<" << s << "> is acceptable.\n";
		}
		else cout << "<" << s << "> is not acceptable.\n";
	}
}