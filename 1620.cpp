#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main()
{
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);

	int n, m;
	unordered_map<int, string> inte;
	unordered_map<string, int> str;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		string s;
		cin >> s;
		inte.insert({ i,s });
		str.insert({ s,i });
	}

	for (int i = 0; i < m; i++) {
		string s;
		cin >> s;
		if ('0' <= s[0] && s[0] <= '9') {
			int q = stoi(s);
			cout << inte.at(q) << "\n";
		}
		else {
			cout << str.at(s) << "\n";
		}
	}
}