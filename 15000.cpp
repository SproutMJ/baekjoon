#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string s;
	cin >> s;
	transform(s.begin(), s.end(), s.begin(), [](char val)->char {
		return toupper(val);
		});
	cout << s;
}