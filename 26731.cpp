#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
bool arr[26];
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);


	string s;
	cin >> s;

	for (const auto& i : s)
		arr[i - 'A'] = true;

	for (int i = 0; i < 26; i++)
		if (arr[i] == false)
			cout << (char)('A' + i);
}