#include <iostream>
#include <queue>
#include <algorithm>
#include <tuple>
using namespace std;

int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	vector<pair<char, char>> dic(n);
	for (auto& i : dic)cin >> i.first >> i.second;

	cin >> n;
	string s;
	char ch;
	for (int i = 0; i < n; i++) {
		cin >> ch;
		s.push_back(ch);
	}

	for (auto& ch : s)
		for (const auto& i : dic)
			if (i.first == ch) {
				ch = i.second;
				break;
			}
	cout << s;
}