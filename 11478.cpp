#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string s;
	cin >> s;

	unordered_set<string> us;
	for (int i = 1; i <= s.size(); i++)
		for (int j = 0; j <= s.size() - i; j++)
			us.insert(s.substr(j, i));

	cout << us.size();
}