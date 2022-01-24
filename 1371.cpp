#include <iostream>
#include <string>
using namespace std;
int a[26];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	while (getline(cin, s))
		for (const auto& i : s) a[i - 'a']++;

	int max = 0;
	for (const auto& i : a) max = std::max(max, i);

	for (int i = 0; i < 26; i++)
		if (a[i] == max) cout << (char)('a' + i);
}