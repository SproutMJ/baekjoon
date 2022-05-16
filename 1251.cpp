#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;
vector<string> v;
int main()
{
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	string s;
	cin >> s;

	string ans = "";
	for (int i=1; i<=s.length()-2;i++)
		for (int j = 1; j <= s.length() - i - 1; j++) {
			string a = s.substr(0, i);
			string b = s.substr(i, j);
			string c = s.substr(i + j);
			reverse(a.begin(), a.end());
			reverse(b.begin(), b.end());
			reverse(c.begin(), c.end());
			v.push_back(a + b + c);
		}
	sort(v.begin(), v.end());
	cout << v[0];
}