#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0);
	std::ios_base::sync_with_stdio(0);

	int n;
	string s;
	int t, ss;
	cin >> n >> s;
	ss = count(s.begin(), s.end(), 's');
	t = s.length() - ss;

	while (1) {
		if (s.length() == 1)break;
		else if (ss == t)break;
		if (s[0] == 's') ss--;
		else t--;
		s = s.substr(1);
	}

	cout << s;

}