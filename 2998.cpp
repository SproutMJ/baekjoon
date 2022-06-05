#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string s;
	cin >> s;

	while (s.length() % 3 != 0)s = '0' + s;

	unordered_map<string, char> mp;
	mp["000"] = '0';
	mp["001"] = '1';
	mp["010"] = '2';
	mp["011"] = '3';
	mp["100"] = '4';
	mp["101"] = '5';
	mp["110"] = '6';
	mp["111"] = '7';

	string ans = "";
	for (int i = 0; i < s.length(); i += 3) {
		string ss = to_string(s[i] - '0') + to_string(s[i + 1] - '0') + to_string(s[i + 2] - '0');
		ans += mp[ss];
	}
		
	cout << ans;
}