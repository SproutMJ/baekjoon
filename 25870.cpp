#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string s;
	cin >> s;

	unordered_map<char, int> ump;
	for (const auto& ch : s)
		if (ump.find(ch) == ump.end())ump[ch] = 1;
		else ump[ch]++;

	int a = 0, b = 0;
	for (const auto& i : ump)
		if (i.second % 2 == 0)a++;
		else b++;

	if (b == 0)cout << 0;
	else if (a == 0)cout << 1;
	else cout << 2;
}