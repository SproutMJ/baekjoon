#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string s;
	cin >> s;
	unordered_map<char, int> um;
	for (const auto& i : s) {
		if (um.find(i) == um.end())
			um[i] = 1;
		else um[i]++;
	}

	if (all_of(um.begin(), um.end(), [](auto val) {return val.second % 2 == 0; }))
		cout << 0;
	else if (all_of(um.begin(), um.end(), [](auto val) {return val.second % 2 == 1; }))
		cout << 1;
	else
		cout << "0/1";
}